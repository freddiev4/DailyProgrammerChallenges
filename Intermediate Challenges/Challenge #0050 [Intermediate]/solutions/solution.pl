#!/usr/bin/perl --

use v5.18;
use warnings;
use utf8;
use Getopt::Long;

binmode STDOUT, ":utf8";

my $version_string = "1.0";
my $depth = -1;
my $base_dir = '.';

GetOptions (
             "depth=i"   => \$depth,    # numeric
             "path=s"    => \$base_dir, # string
             "help"      => \&usage,
             "version"   => \&version,
           )
           or die "Try $0 --help for more information";

print_directory_tree($base_dir, $depth, "");

sub print_directory_tree{
    my ($directory, $depth, $preface) = @_;
    chdir $directory or die "Cannot use $directory: $!";
    opendir my $dh, "." or die "Cannot open $directory: $!";
    my @dirs = sort grep { -d and not /^\./ } readdir($dh);
    closedir $dh;

    print "  " if $preface eq "";
    say "$directory";
    say "$preface  +" if @dirs and $depth != 0;

    for ( my $i = 0; $i < @dirs; $i++ ) {
        my $dir = $dirs[$i];
        if ( $depth != 0 ) { # if depth < 0 then as far as can go.
            say "$preface  |";
            print "$preface  +--";
            # if not last sub-directory then should extend preface
            # so that sub-subs are further across
            print_directory_tree($dir, $depth - 1, ($i < $#dirs) ? "$preface  |" : "$preface   ")
        }
    }

    chdir "..";
}

sub usage{
    say "Usage: $0 [LONG-OPTION]...";
    say "   or  $0 [SHORT-OPTION]...";
    say "Prints out a tree for a given directory or, if none given, the current directory.";
    say "";
    say "   -p, --path      create tree of this directory";
    say "   -d, --depth     show tree to a depth of d";
    say "   -h, --help      display this help and exit";
    say "   -v, --version   display version information and exit";
    exit;
}

sub version{
    say "Tree v$version_string";
    exit;
}
