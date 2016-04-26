// (Badly) made by https://github.com/lolibutts
#include <iostream>

/*
write a program that will print the song "99 bottles of beer on the wall".
for extra credit, do not allow the program to print each loop on a new line.
*/

int main()
{
        for (int i = 99; i > 0; i--)
        {
                if (i == 2)
                {
                        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << std::endl;
                        std::cout << "Take one down and pass it around, " << (i - 1) << " bottle of beer on the wall." << std::endl;
                }
                else if (i == 1)
                {
                        std::cout << i << " bottle of beer on the wall, " << i << " bottle of beer." << std::endl;
                        std::cout << "Take one down and pass it around, no more bottles of beer on the wall." << std::endl;
                }
                else
                {
                        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << std::endl;
                        std::cout << "Take one down and pass it around, " << (i - 1) << " bottles of beer on the wall." << std::endl;
                }
                std::cout << "No more bottles of beer on the wall, no more bottles of beer. " << std::endl;
                std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << std::endl;
                return 0;
        }
}
