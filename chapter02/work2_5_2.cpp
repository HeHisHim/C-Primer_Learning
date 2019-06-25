#include <iostream>

int main(int argc, char const *argv[])
{
    const int i = 42;
    auto j = i; // j(int) 可修改
    const auto &k = i; // k(const int) 不可修改
    auto *p = &i; // *p(const int) 可修改p的值, 不可修改*p的值
    const auto j2 = i, &k2 = i; // j2(const int) k2(const int) j2, k2都不可修改
    return 0;
}