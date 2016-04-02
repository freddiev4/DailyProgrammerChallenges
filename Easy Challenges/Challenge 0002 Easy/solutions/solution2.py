"""
A more pythonic solution for Easy Challenge #0002

Works with Python 3
"""

# GitHub: https://github.com/oz123

import sys
if sys.version_info.major < 2:
    print("This is not meant to run with Python 2")
    sys.exit(1)


def add(a, b):
    return sum((a, b))


def subsrtcat(a, b):
    return a - b


def multiply(a, b):
    return a * b


def divide(a, b):
    if not b:
        raise ZeroDivisionError("You divide by zero")
    return a / b


def main():
    ops = {'+': add, '-': subsrtcat, '*': multiply, '/': divide}
    series = input("Enter two numbers and an algebraic operation (e.g. '1 + 3' or '3 * 3' \n")
    for op in ops.keys():
        items = series.split(op, 1)
        if len(items) > 1:
            break

    items = [i.strip() for i in items]

    if not all(i.isdigit() for i in items):
        print("Your input was not vaild")
        sys.exit(2)

    print("The result is: ", ops[op](int(items[0]), int(items[1])))


if __name__ == '__main__':
    main()
