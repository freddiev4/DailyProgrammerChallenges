#!/usr/bin/perl --

use v5.18;
use warnings;
use Scalar::Util qw(looks_like_number);

# First need to pre-populate a list of primes
my @primes;
my $max = 1_000_000;

populate_primes(\@primes);

$, = "*";
while (<>) {
    say factorise($_);
}

sub factorise{
    my $number = shift;
    my $max = sqrt($number);
    my @factors;

    if ( not looks_like_number($number)){
        warn "Cannot factor non-number: $number";
        return;
    }
    elsif ($number <= $max) {
        warn "$number is too big, can only do up to $max";
        return;
    }
    elsif ($number < 2 ) {
        warn "$number is too small, must be bigger than 1";
        return;
    }

    FACTOR:
    for my $prime (@primes) {
        last if $number == 1;
        until ( $number % $prime ) {
            push @factors, $prime;
            $number /= $prime;
        }
    }
    @factors;
}

sub populate_primes{
    my $primes = shift;
    my @composites;
    my ($i, $j);

    # Sieve of Erastothenes
    COMPOSITE:
    for ( $i = 2; $i <= $max; $i++ ) {
        next if $composites[$i];
        push @$primes, $i;
        for ( $j = $i; $j <= $max; $j += $i ) {
            $composites[$j] = 1;
        }
    }
}
