#include <iostream>
#include <vector>
#include <string>
#include "person.h"

using namespace std;

// ex7_17
/*
    使用class和struct定义类唯一的区别就是默认的访问权限
    使用struct关键字, 则定义在第一个访问说明符之前的成员是public
    使用class关键字, 则定义在第一个访问说明符之前的成员是private
 */

int main(int argc, char const *argv[])
{
    Person person("abc", "asdf");
    cout << person.get_address() << endl;
    cout << person.get_name() << endl;
    return 0;
}