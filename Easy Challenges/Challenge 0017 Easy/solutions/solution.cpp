// (Badly) made by https://github.com/lolibutts

#include <iostream>
#include <string>
#include <iomanip>

int triangle(int a)
{
        char star = '@';
        for (int i = 0; i <= a; i++)
        {
                std::cout << std::setw(a*2);
                std::cout << std::right << std::string(i*2, star) << std::endl;
        }
}

int main()
{
        std::cout << "Enter a number: " << std::endl;
        int num;
        std::cin >> num;

        triangle(num);
        return 0;
}
