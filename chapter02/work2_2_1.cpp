#include <iostream>

void ex2_9(void)
{
    // std::cin >> int input_value; // 语法错误

    // error: type 'double' cannot be narrowed to 'int' in initializer list [-Wc++11-narrowing]
    // c++11中, 列表初始化如果会导致数据丢失, 就报错
    // int i = {3.14};

    // double salary = wage = 9999.99; // wage未定义

    // int i = 3.14; // warning
}

std::string global_str;
int global_int;

int main(int argc, char const *argv[])
{
    // ex2_9();

    int local_int;
    std::string local_str;

    std::cout << global_str << std::endl; // ""
    std::cout << global_int << std::endl; // 0
    std::cout << local_int << std::endl; // 0
    std::cout << local_str << std::endl; // ""

    return 0;
}