#include <iostream>
#include "strblob.h"

using namespace std;

// ex12_1
/*
    b1 4个元素
    b2 4个元素
 */

// ex12_3
/*
    不需要 对象内容改变不需要对象是const类型
*/

// ex12_4
/*
    i的类型是size_type
    size_type是无符号类型
*/

int main(int argc, char const* argv[])
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << b1.size() << " " << b2.size() << endl;
    }
    return 0;
}