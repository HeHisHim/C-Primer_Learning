// 标准输入输出

#include <iostream>

int main(int argc, char const *argv[])
{
    // std::cout << xxxx 返回一个std::cout对象, 所以可以接连使用 << 运算符
    std::cout << "Enter two numbers: " << std::endl;
    int x = 0, y = 0;

    std::cin >> x >> y;

    std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
    
    // std::cerr << "error" << std::endl; // error

    // std::clog << "log" << std::endl; // log

    return 0;
}