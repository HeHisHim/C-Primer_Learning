#include <iostream>

int ex1_16(void)
{
    int sum = 0, val;

    while(std::cin >> val)
    {
        sum += val;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int x = ex1_16();

    std::cout << x << std::endl;
    
    return 0;
}