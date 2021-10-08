def main():
    """Main program
    """
    digits = []
    while True:
        new_dig = input("Enter a digit. Enter E to exit.\n")
        if new_dig == "E":
            break
        digits.append(new_dig)

    print(sorted(digits))


if __name__ == "__main__":
    main()
