#Solution by https://github.com/Ouss4

x = int(input("Enter a number : "))

print("{} is a {} Kaprekar number".format(x, "" if (x == (x*x // 10**len(str(x))) + (x*x % 10**len(str(x)))) else "not" ))
