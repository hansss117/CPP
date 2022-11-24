#include <iostream>
#include <string>

bool is_prime(long num)
{
    if (num == 3 || num == 2)
    {
        return true;
    }

    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    for (int i = 4; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return num < 2 ? false : true;
}

void printPrimeNumber(long num)
{
    std::cout << num << " is a prime: " << (is_prime(num) == 1 ? "True" : "False") << "\n"; 
}

int main()
{
    long n;
    while (std::cin >> n)
    {
        printPrimeNumber(n);
    }
    return 0;
}