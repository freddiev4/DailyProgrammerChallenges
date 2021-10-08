import string
import random

PASSWORD = "password"


def main():
    """Main program
    """
    txt = input("Enter the password: ")
    if txt == PASSWORD:
        print("password accepted")
    else:
        print("wrong password entered")


if __name__ == "__main__":
    main()
