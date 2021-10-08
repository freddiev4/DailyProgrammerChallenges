import string
import random

PASSWORD = "password"


def main():
    """Main program
    """
    k = 1.0
    total = 0.0
    for i in range(1000000):
        if i % 2 == 0:
            total += 4/k
        else:
            total -= 4/k
        k += 2
    print(total)


if __name__ == "__main__":
    main()
