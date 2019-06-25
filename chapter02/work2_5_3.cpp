#include <iostream>

void ex2_36(void)
{
    int a = 3, b = 4; // a(int) b(int)
    decltype(a) c = a; // c(int)
    decltype((b)) d = a; // d(int &)
    ++c;
    ++d;
    // a = 4, b = 4, c = 4, d = 4
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
}

void ex2_37(void)
{
    int a = 3, b = 4; // a(int) b(int)
    decltype(a) c = a; // c(int)
    decltype(a = b) d = a; // d(int&), 赋值是会产生引用的一类典型表达式, 表达式a = b的类型是int&
    // ++d;
    // std::cout << a << " " << b << " " << c << " " << d << std::endl;
}

int main(int argc, char const *argv[])
{
    // ex2_36();
    ex2_37();
    return 0;
}