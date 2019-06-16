// 标准输入输出

// std::endl
// 运算符endl是被称为操纵符的特殊值, 写入endl的效果是结束当前行. 并将与输出关联的缓冲区的内容全部刷新到输出中
// 缓冲刷新操作可以保证到目前为止程序产生的所有输出都真正写到输出流中, 而不是在内存中等待写入流

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