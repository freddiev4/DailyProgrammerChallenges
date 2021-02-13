"""Password Generator. Challenge 4 Easy

Returns:
    [type]: [description]
"""
import string
import random

class PasswordClient:
    """Solution class
    """
    def generate_password_list(self, password_length=15, number_of_passwords=1) -> list:
        """Generate a list of passwords

        Args:
            password_length (int, optional): [description]. Defaults to 15.
            number_of_passwords (int, optional): [description]. Defaults to 1.

        Returns:
            list: list of passwords
        """
        if number_of_passwords < 1 or password_length < 1:
            return []
        list_of_passwords = []
        for _ in range(number_of_passwords):
            list_of_passwords.append(self._generate_a_password(password_length))
        return list_of_passwords

    def _generate_a_password(self, password_length: int) -> str:
        """Helper function to generate a single password

        Args:
            password_length (int): [description]

        Returns:
            str: [description]
        """
        return ''.join(random.choice(string.ascii_letters +
                                     string.digits) for _ in range(password_length))

def main():
    """Main program
    """
    password_client = PasswordClient()
    print(password_client.generate_password_list(15, 1))
    print(password_client.generate_password_list(4, 2))

if __name__ == "__main__":
    main()
