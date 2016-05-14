// (Badly) made by https://github.com/lolibutts
#include <iostream>
#include <cmath>

/*
create a program that will find all prime numbers below 2000
*/

bool is_prime(int n)
{
        int i,sq,count = 0;
        if (n == 1)
        {
                return false;
        }
        if (n == 2)
        {
                return true;
        }
        if (n % 2 == 0)
        {
                return false;
        }
        sq = sqrt(n);
        for(i = 2; i <= sq; i++)
        {
                if(n % i == 0)
                {
                        return false;
                }
        }
        return true;
 }

int main()
{
        for (int i = 0; i < 2000; i++)
        {
                if (is_prime(i))
                {
                        std::cout << i << std::endl;
                }
        }
        return 0;
}
