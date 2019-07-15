#include <iostream>

using namespace std;

void ex6_12(int& x, int& y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

// ex6_15
/*
    1. s是常量引用是因为读s对象的值, occurs是普通引用是因为需要不断写occurs的值
    2. c不用引用类型是因为只需要用到c的值, 并且本身占用空间不大
    3. 如果s是普通引用可能会在不经意间改变s的值, 如果函数无须改变引用形参的值, 最好将其声明为常量引用
    4. 如果occurs是常量引用, 则对occurs递增时会报错
 */

int main(int argc, char const *argv[])
{
    int x = 10, y = 100;
    cout << x << " " << y << endl;
    ex6_12(x, y);
    cout << x << " " << y << endl;
    return 0;
}