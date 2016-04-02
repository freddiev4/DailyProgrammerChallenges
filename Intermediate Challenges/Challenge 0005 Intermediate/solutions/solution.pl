#!/usr/bin/perl --

use v5.18;
#use warnings;

die "Need name of text file" unless @ARGV;

my %dictionary;
my $num_anagrams;

open my $fh, "<", $ARGV[0] or die "Cannot open $ARGV[0]";

while ( my $word = <$fh> ) {
    chomp $word;
    my $key = join "", sort split "", $word;
    push @{ $dictionary{$key} }, $word;
}

close $fh;

$, = ",";
while ( my ($key, $words ) = each %dictionary) {
    if ( @$words > 1 ) {
        say @$words;
        $num_anagrams += @$words;
    }
}

say $num_anagrams;
