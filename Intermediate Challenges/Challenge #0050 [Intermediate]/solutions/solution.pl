#!/usr/bin/perl --

use v5.18;
use warnings;
use utf8;
use Getopt::Long;
use Cwd;

binmode STDOUT, ":utf8";

my $version_string = "1.0";
my $depth = -1;

GetOptions (
             "depth=i"   => \$depth,    # numeric
             "help"      => \&usage,
             "version"   => \&version,
           )
           or die "Try $0 --help for more information";

push @ARGV, '.' unless @ARGV;

my $pwd = getcwd();
for my $dir ( @ARGV ) {
    print_directory_tree($dir, $depth, "");
    chdir $pwd;
}

sub print_directory_tree{
    my ($directory, $depth, $preface) = @_;
    chdir $directory or die "Cannot use $directory: $!";
    opendir my $dh, "." or die "Cannot open $directory: $!";
    my @dirs = sort grep { -d and not /^\./ } readdir($dh);
    closedir $dh;

    print "  " if $preface eq "";
    say "$directory";

    for ( my $i = 0; $i < @dirs; $i++ ) {
        my $dir = $dirs[$i];
        if ( $depth != 0 ) { # if depth < 0 then as far as can go.
            if ( $i < $#dirs ) {
                print "$preface  ├──";
                print_directory_tree($dir, $depth - 1, "$preface  │")
            }
            else {
                # if not last sub-directory then should extend preface
                # so that sub-subs are further across
                print "$preface  └──";
                print_directory_tree($dir, $depth - 1, "$preface   ")
            }
        }
    }

    chdir "..";
}

sub usage{
    say "Usage: $0 [LONG-OPTION]... [DIRECTORY]...";
    say "   or  $0 [SHORT-OPTION]... [DIRECTORY]...";
    say "Prints out a tree for the given DIRECTORY or, if none given, the current directory.";
    say "";
    say "   -d, --depth     show tree to a depth of d";
    say "   -h, --help      display this help and exit";
    say "   -v, --version   display version information and exit";
    exit;
}

sub version{
    say "Tree v$version_string";
    exit;
}
