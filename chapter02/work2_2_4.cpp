#include <iostream>

int i = 42;

void ex2_14(void)
{
    int i = 100, sum = 0;
    for(int i = 0; 10 != i; i++)
    {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; // 100 45 for循环内部的变量i已被回收
}

int main(int argc, char const *argv[])
{
    int i = 100;
    int j = i; // j = 100
    // std::cout << j << std::endl;

    ex2_14();

    return 0;
}