#include <iostream>

int ex1_12(void)
{
    int sum = 0;

    for(int i = -100; i <= 100; i++)
    {
        sum += i;
    }
    return sum;
}

int ex1_9(void)
{
    int sum = 0;
    for(int x = 50; x <= 100; x++)
    {
        sum += x;
    }

    return sum;
}

void ex1_10(void)
{
    for(int x = 10; x != -1; x--)
    {
        std::cout << x << std::endl;
    }
}

void ex1_11(void)
{
    int x, y;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x >> y;

    if(x > y)
    {
        for(; x != y; x--)
        {
            std::cout << x << std::endl;
        }
    }
    else
    {
        for(; x != y; x++)
        {
            std::cout << x << std::endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    // int x = ex1_12();
    // std::cout << x << std::endl; // 0

    // int x = ex1_9();
    // std::cout << x << std::endl; // 3825

    // ex1_10();

    ex1_11();

    return 0;
}