#!/usr/bin/perl --

use v5.22;
use warnings;
use integer;

my $high = 100;
my $low = 1;

say "Please think of a number between $low and $high inclusive.";

GUESS:
while($high >= $low) {
    my $guess = ($high + $low) / 2;
    say "I guess $guess, is that correct, too high or too low?";

    ANSWER:
    while (1) {
        my $response = <> // "";
        chomp $response;

        if ( $response eq "correct" ) {
            say "Yay!";
            last GUESS;
        }
        elsif ( $response eq "high" ) {
            say "Bah!";
            $high = $guess - 1;
            next GUESS;
        }
        elsif ( $response eq "low" ) {
            say "Bah!";
            $low = $guess + 1;
            next GUESS;
        }

        say "My guess is $guess, please say 'correct' if I'm right, "
           ."'high' if I've guessed too high or 'low' if I've guessed too low";
        next ANSWER;
    }
}

say "You cheated!" if $high < $low;
