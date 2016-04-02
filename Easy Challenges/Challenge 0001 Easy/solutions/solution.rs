// compile with rustc solution.rs

// compiled with rustc 1.7.0 (a5d1e7a59 2016-02-29)
// to see how rust works with reading strings, remove the unwrap calls
// and see what happens

use std::io::{self,BufRead};

fn main() {
    let mut name = String::new();
    println!("What is your name?");
    let stdin = io::stdin();
    stdin.lock().read_line(&mut name).unwrap();
    let mut age = String::new();
    println!("What is your age?");
    stdin.lock().read_line(&mut age).unwrap();
    let mut username = String::new();
    println!("What is your reddit username?");
    stdin.lock().read_line(&mut username).unwrap();
    match age.trim_right().parse::<u32>() {
     Ok(age_i) =>
    	println!("your name is {}, you are {:?} years old, and your username is {}", name.trim_right(), age_i, username.trim_right()),
     // Err(_) => {},
     Err(_) => println!("Could not understand your age..."),
	}
}

