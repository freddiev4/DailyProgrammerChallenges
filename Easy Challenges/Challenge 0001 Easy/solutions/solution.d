#!/usr/bin/env rdmd
/***************************
 * Name: Zardoz84
 *
 * Description: A bonus solution that just prints it out to stdout and logs to a
 * log.txt file. Also, does sanitazation of input (enforces non empty strings 
 * and numeric value for age)
 *
 * Last Modified: 22-03-2016 11:34 AM GMT+1
 **************************/

import std.stdio;
import std.string : strip, isNumeric;
import std.conv : parse;

void main () {
  string name;
  writeln("What is your name?");
  while ( name.length <= 0) {
    name = readln().strip;
  }

  string ageStr;
  writeln("How old are you?");
  while ( ageStr.length <= 0 || ! ageStr.isNumeric ) {
    ageStr = readln().strip;
  }
  uint age = parse!uint(ageStr);

  string username;
  writeln("What is your Reddit username?");
  while ( username.length <= 0) {
    username = readln().strip;
  }

  auto f = File("log.txt", "a");

  writeln("your name is ",name, ", you are ", age," years old, and your username is ", username);
  f.writeln("your name is ",name, ", you are ", age," years old, and your username is ", username);
}
