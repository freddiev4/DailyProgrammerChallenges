#!/usr/bin/perl --

use v5.18;
use warnings;

while (<>) {
    chomp;
    my @dates = m{
                    (
                     \d{4} # year
                     \s*
                     \d{2} # month
                     \s*
                     \d{2} # day
                     \s*
                     \d{2} # hour
                     :
                     \d{2} # minute
                     :
                     \d{2} # second
                    )
                 }gx;
    $, = " ";
    say sort @dates;
}
