#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"

using namespace std;

// ex7_48
/*
    执行都是正确的
 */

// ex7_49
/*
    a. s隐式转换为Sales_data, 形成一个临时变量, 用这个Sales_data构造一个临时变量. 执行完毕后将其丢弃
    b. s隐式转换为Sales_data, 形成一个临时变量, 用这个Sales_data初始化引用, 临时变量的值会被可变
    c. s隐式转换为Sales_data, 形成一个临时变量, 用这个Sales_data初始化const引用, 临时变量的值不会被改变
 */

int main(int argc, char const *argv[])
{
    string null_isbn("9-999-99999-9");
    Sales_data item1(null_isbn);
    Sales_data item2("9-999-99999-9");
    Sales_data item3;

    return 0;
}