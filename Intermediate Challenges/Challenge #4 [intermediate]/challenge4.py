"""Scientific Calculator. Challenge 4 Medium

A quick solution and some tests. There may be more tests needed. I won't be updating with the tests
Pylint
Your code has been rated at 9.68/10 (previous run: 9.68/10, +0.00)

Returns:
    [type]: [description]
"""
import unittest

class Solution:
    """Solution Class
    """
    def calculate(self, calculator_input: str) -> int:
        """Run a calculation

        Args:
            calculator_input (str): Calculator input

        Returns:
            int: Calculation result
        """
        if not calculator_input[0].isnumeric():
            raise TypeError("Calculator input needs to start with a number")

        final_sum = 0.0
        prod = 1.0
        division = False
        decimal_found = False
        expect_number = False

        i = 0
        while i < len(calculator_input):
            if calculator_input[i].isnumeric():
                expect_number = False
                j = i + 1

                while j < len(calculator_input):
                    if not calculator_input[j].isnumeric():
                        if calculator_input[j] == ".":
                            if decimal_found:
                                raise TypeError("Too many decimals found. Position " + j)
                            decimal_found = True
                            j += 1
                            continue
                        decimal_found = False
                        break
                    j += 1

                if division:
                    prod /= float(calculator_input[i:j])
                else:
                    prod *= float(calculator_input[i:j])
                i = j
            else:
                if expect_number:
                    raise TypeError("Expected number at position " + i)
                if calculator_input[i] == "+":
                    final_sum += prod
                    prod = 1
                elif calculator_input[i] == "-":
                    final_sum += prod
                    prod = -1
                elif calculator_input[i] == "*":
                    division = False
                elif calculator_input[i] == "/":
                    division = True
                else:
                    raise TypeError("Invalid value " + calculator_input[i])
                expect_number = True
                i += 1

        final_sum += prod
        return str(final_sum)

class TestSolution(unittest.TestCase):
    """Test Solution Suite
    """
    def test_addition(self):
        """Test Addition
        """
        # Setup
        input_val = "2+1"
        expected = "3.0"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_subtraction(self):
        """Test Addition
        """
        # Setup
        input_val = "2-1"
        expected = "1.0"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_multiplication(self):
        """Test Addition
        """
        # Setup
        input_val = "2*1"
        expected = "2.0"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_division_integer(self):
        """Test Addition
        """
        # Setup
        input_val = "2/1"
        expected = "2.0"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_division_decimal(self):
        """Test Addition
        """
        # Setup
        input_val = "3/2"
        expected = "1.5"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_decimal_input(self):
        """Test Addition
        """
        # Setup
        input_val = "3.2/2.5"
        expected = "1.28"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_extended_equation(self):
        """Test bad input
        """
        # Setup
        input_val = "5+4*5*2+4/2-3"
        expected = "46.666666666666664"
        sut = Solution()

        # Execution
        result = sut.calculate(input_val)

        # Verification
        self.assertEqual(result, expected)

    def test_bad_input_not_equation(self):
        """Test bad input
        """
        # Setup
        input_val = "not numbers"
        expected = TypeError
        sut = Solution()

        # Verification
        with self.assertRaises(expected):
            sut.calculate(input_val)

    def test_bad_input_too_many_decimals(self):
        """Test bad input
        """
        # Setup
        input_val = "3...4*2..3"
        expected = TypeError
        sut = Solution()

        # Verification
        with self.assertRaises(expected):
            sut.calculate(input_val)

    def test_bad_input_invalid_operation(self):
        """Test bad input
        """
        # Setup
        input_val = "3&42.3"
        expected = TypeError
        sut = Solution()

        # Verification
        with self.assertRaises(expected):
            sut.calculate(input_val)

    def test_bad_input_expected_number(self):
        """Test bad input
        """
        # Setup
        input_val = "3**4*2.3"
        expected = TypeError
        sut = Solution()

        # Verification
        with self.assertRaises(expected):
            sut.calculate(input_val)

def main():
    """Main Function
    """
    sut = Solution()
    print(sut.calculate("1+2"))
    print(sut.calculate("2-1"))
    print(sut.calculate("2*1"))
    print(sut.calculate("2/1"))
    print(sut.calculate("3/2"))
    print(sut.calculate("3.2/2.5"))
    print(sut.calculate("5+4*5*2+4/2-3"))

if __name__ == '__main__':
    main()
    unittest.main()
