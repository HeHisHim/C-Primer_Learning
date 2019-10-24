#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>

using namespace std;

// ex12_12
/*
    auto p = new int();
    auto sp = mark_shared<int>();

    (a)process(sp); 合法
    (b)process(new int()); 不合法 shared_ptr<int> ptr = new int() 赋值方式不合法
    (c)process(p); 不合法 理由同b
    (d)process(shared_ptr<int>(p)); 合法, 但是结束process调用时会释放p指向的内存, p变为空悬指针
*/

// ex12_13
/*
    sp指向的内存被间接释放, sp失效
*/

int main(int argc, char const* argv[])
{
    return 0;
}