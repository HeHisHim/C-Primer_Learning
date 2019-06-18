#include <iostream>

int ex1_9(void)
{
    int sum = 0, val = 50;

    while (100 >= val)
    {
        sum += val;
        val++;
    }
    return sum;
}

void ex1_10(void)
{
    int val = 10;

    while(0 <= val)
    {
        std::cout << val << std::endl;
        val--;
    }
}

void ex1_11(void)
{
    int x, y;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x >> y;

    if(x > y)
    {
        while(x != y)
        {
            std::cout << x << std::endl;
            x--;
        }
    }
    else
    {
        while(x != y)
        {
            std::cout << x << std::endl;
            x++;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    // int x = ex1_9();
    // std::cout << x << std::endl;
    
    // ex1_10();

    ex1_11();

    return 0;
}