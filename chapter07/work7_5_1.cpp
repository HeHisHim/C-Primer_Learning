#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ex7_36
struct X
{
    X(int i, int j): base(i), rem(base % j){}
    // int rem, base;
    // 成员的初始化顺序与它们在类定义中的出现顺序一致
    int base, rem;
};

// ex7_38
class Use_Istream
{
    public:
        Use_Istream(istream& is = cin){}
};

// ex7_39
// 不合法
// 如果不提供实参的情况下, 会产生二义性错误, 编译器无法判断调用这两个构造函数的哪一个

int main(int argc, char const *argv[])
{
    // X x(10, 3);
    // cout << x.rem << " " << x.base << endl;

    Use_Istream u;
    return 0;
}