// GreatestCommonDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Gcd(int firstNum, int secondNum)
{
    int smaller = std::min(firstNum, secondNum);
    for (int i = smaller; i > 0; --i)
        if (firstNum % i == 0 && secondNum % i == 0)
            return i;

    return -1;
}

int main()
{
    while (true)
    {
        std::cout << "Please enter 2 number: ";
        int n1 = 0, n2 = 0;
        std::cin >> n1 >> n2;
        if (n1 == 0 || n2 == 0)
            break;

        std::cout << "The greatest common divisor of " << n1 << " and " << n2 << " is " << Gcd(n1, n2) << std::endl << std::endl;
    }
}
