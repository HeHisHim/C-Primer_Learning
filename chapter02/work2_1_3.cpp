#include <iostream>

void ex2_6(void)
{
    int month = 9, day = 7;
    // int month = 09, day = 07; # error 0%d 表示八进制数, 09是错误数值
    std::cout << month << day << std::endl;
}

void ex2_8(void)
{
    // \155(字符M)
    std::cout << "2\155" << std::endl;
    std::cout << "2\t\155" << std::endl;
}

int main(int argc, char const *argv[])
{
    // ex2_6();
    ex2_8();
    return 0;
}