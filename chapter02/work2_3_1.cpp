#include <iostream>

void ex2_15(void)
{
    int ival = 1.01; // warning
    // int &rval1 = 1.01; // error, rval1被赋值的不是对象
    int &rval2 = ival; // True
    // int &rval3; // error, rval3没被初始化
    std::cout << ival << " " << rval2 << std::endl;
}

void ex2_16(void)
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159; //True d = r2 = 3.14159
    // r2 = r1; // True d = r2 = 0.0;
    i = r2; // i = r1 = 0;
    r1 = d; // i = r1 = 0;

    std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
}

void ex2_17(void)
{
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl; // 10 10
}

int main(int argc, char const *argv[])
{
    // ex2_15();
    // ex2_16();
    ex2_17();
    return 0;
}