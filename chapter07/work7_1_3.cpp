#include <iostream>
#include <vector>
#include <string>
// ex7_9
#include "person.h"

using namespace std;

// ex7_8
/*
    因为read函数需要改变Sales_data对象的内容, 而print不需要
 */

// ex7_10
/*
    判断返回的istream对象是否合法
 */

int main(int argc, char const *argv[])
{
    Person person;
    read(cin, person);
    print(cout, person) << endl;
    return 0;
}