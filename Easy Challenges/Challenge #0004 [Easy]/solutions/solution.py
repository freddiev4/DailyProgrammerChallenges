# generates random passwords / hexstrings
# works on Python 3. written by kbrgl.
import string
from random import randint

class PasswordGenerator:
    """generates a random password"""
    def __init__(self, acceptable_characters=string.hexdigits):
        self.acceptable_characters = acceptable_characters

    def generate(self, length=4, n=1):
        return [self.random_blob(length) for _ in range(n)]

    def random_blob(self, length):
        result = []
        for _ in range(length):
            result.append(self.acceptable_characters[randint(0, (len(self.acceptable_characters) - 1))])
        return ''.join(result)


if __name__ == '__main__':
    generator = PasswordGenerator()
    n = input("number of passwords: ")
    length = input("how long: ")
    for password in generator.generate(int(length), int(n)):
        print(password)
