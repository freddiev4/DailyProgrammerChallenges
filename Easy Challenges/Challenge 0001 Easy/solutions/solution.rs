// compile with rustc solution.rs

// compiled with rustc 1.7.0 (a5d1e7a59 2016-02-29)
// to see how rust works with reading strings, remove the unwrap calls
// and see what happens

// oz123 <Oz N Tiram>
use std::error::Error;
use std::io;
use std::io::prelude::*;
use std::fs::File;
use std::path::Path;

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
    let age_i: u8 = age.trim().parse().expect("please give a number!");

    let text : String = format!("your name is {}, you are {:?} years old, and your username is {}\n",
                                name.trim_right(), age_i, username.trim_right());
    print!("{}", text);


    let path = Path::new("out.txt");
    let display = path.display();

    // Open a file in write-only mode, returns `io::Result<File>`
    let mut file = match File::create(&path) {
        Err(why) => panic!("couldn't create {}: {}",
                           display,
                           Error::description(&why)),
        Ok(file) => file,
    };

    match file.write_all(text.as_bytes()) {
        Err(why) => {
            panic!("couldn't write to {}: {}", display,
                                               Error::description(&why))
        },
        Ok(_) => println!("successfully wrote to {}", display),
    };
}
