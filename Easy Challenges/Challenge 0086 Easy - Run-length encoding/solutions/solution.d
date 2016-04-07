#!/usr/bin/env rdmd
/***************************
 * Name: Zardoz84
 *
 * Description: A solution that does RLE compresion from an input string from
 * STDIN (do Ctrl+D if you are doing input by hand).
 *
 * Bonus : Decode function
 * Bonus : Unicode aware
 *
 * Last Modified: 23-03-2016 12:52 AM GMT+1
 **************************/

import std.typecons : Tuple;

alias Pair = Tuple!(dchar, "symbol", ushort, "count");

void main () {
  import std.stdio;
  import std.array : array, join;

  dstring input = cast (dstring) stdin.byLine.join.array;

  auto rle = RLEEncode (input);
  foreach (Pair p; rle) { // Pretty print
    write ("(", p.count, ",'", p.symbol, "')");
  }
  writeln ();
  writeln (RLEDecode (rle));
}

Pair[] RLEEncode (dstring input) {
  ushort counter;
  dchar symbol = input[0]; // First symbol

  Pair[] ret;
  foreach (dchar n; input) {
    if (symbol == n && counter < ushort.max ) {
      counter++;

    } else {
      ret ~= Pair (symbol, counter);
      counter = 1;
      symbol = n;
    }
  }
  ret ~= Pair (symbol, counter); // Last symbol

  return ret;
}

string RLEDecode (Pair[] rle) {
  import std.conv : to;
  import std.array : replicate;
  string ret;
  foreach (Pair p; rle) {
    ret ~= replicate (p.symbol.to!string, p.count);
  }

  return ret;
}

