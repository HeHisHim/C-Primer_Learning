#include <iostream>

void ex1_3(void)
{
    std::cout << "Hello World" << std::endl;
}

void ex1_4(int x, int y)
{
    std::cout << "The product of " << x << " and " << y << " is " << x * y << std::endl;
}

void ex1_5(int x, int y)
{
    std::cout << "The product of ";
    std::cout << x;
    std::cout << " and ";
    std::cout << y;
    std::cout << " is ";
    std::cout << x * y;
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    // ex1_3();
    // ex1_4(3, 4);
    ex1_5(3, 5);

    return 0;
}