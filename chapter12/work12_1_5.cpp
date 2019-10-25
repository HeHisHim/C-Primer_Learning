#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>

using namespace std;

void ex12_16(void)
{
    unique_ptr<int> ptr(new int(23));
    // unique_ptr<int> other(ptr);
    // unique_ptr<int> other;
    // other = ptr;
}

void ex12_17(void)
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;
    // IntP p0(ix); ix不是指针类型
    IntP p1(pi); // pi指向的是非动态分配的内存
    IntP p2(pi2); // 合法
    IntP p3(&ix); // &ix指向的是非动态分配的内存
    IntP p4(new int(2048)); // 合法
    IntP p5(p2.get()); // 不合法, 使用get初始化一个智能指针, p2和p5指向同一块内存. 当指针非法, 智能指针会自动delete, 此时这块内存会被二次delete
}

// ex12_18
/*
    release的作用是交出指针指向对象的控制权, 但是shared_ptr是多对一的关系
    一个shared_ptr交出控制权, 其它shared_ptr依旧可以控制这个对象. 因此这个方法对shared_ptr无意义
*/

int main(int argc, char const* argv[])
{
    ex12_16();
    return 0;
}