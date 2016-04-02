#!/usr/bin/perl --

use v5.18;
use warnings;
use integer;
use Scalar::Util qw(looks_like_number);
$, = " ";

NUMBER:
while (1) {
    print "Enter number: ";

    my $number = <> // 10; # default to 10
    chomp $number;

    if ( $number =~ /q/ )
        last NUMBER;

    if ( not looks_like_number($number) or $number < 1 ) {
        warn "Invalid number: $number";
        next NUMBER;
    }


    # Sum of the first n natural numbers is given by the formula:
    # S_n = n(n+1)/2
    # if user's input doesn't give a whole number answer to this,
    # it is not possible to print out the triangle.
    # Instead will go for next number down that can.
    #
    # n ^ 2 + n - S * 2 = 0
    # n = - 1 + sqrt(1 + 8 * S) / 2
    # minus would produce negative, so is ignored

    my $rows = ( -1 + sqrt(1 + 8 * $number) ) / 2;

    my $triangle_number = $rows * ( $rows + 1 ) / 2;

    for ( ; $rows > 0; $rows-- ) {
        say ($triangle_number - $rows + 1 .. $triangle_number);
        $triangle_number -= $rows;
    }
}
