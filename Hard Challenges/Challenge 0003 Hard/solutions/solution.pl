#!/usr/bin/perl --

use v5.18;
use warnings;

my %dictionary;
my @scrambled_words = qw{
    mkeart sleewa edcudls
    iragoge usrlsle nalraoci
    nsdeuto amrhat inknsy
    iferkna
};

open my $fh, "<", "wordlist.txt" or die "Cannot open wordlist";

while (my $word = <$fh>) {
    chomp $word;
    my $key = join "", sort split "", $word;
    $dictionary{$key} = $word;
}

close $fh or die "Cannot close wordlist";

for my $word (sort @scrambled_words) {
    my $key = join "", sort split "", $word;
    say $dictionary{$key};
}
