#include <iostream>

using namespace std;

bool ex6_17_1(const string& str)
{
    char c;
    for(auto c : str)
    {
        if(c == toupper(c))
        {
            return true;
        }
    }
    return false;
}

const string ex6_17_2(const string& str)
{
    char c;
    string s = str;
    for(auto& c : s)
    {
        c = tolower(c);
    }

    return s;
}

// ex6_15
/*
    1. s是常量引用是因为读s对象的值, occurs是普通引用是因为需要不断写occurs的值
    2. c不用引用类型是因为只需要用到c的值, 并且本身占用空间不大
    3. 如果s是普通引用, 则不能用字面值初始化s, 必须用string对象
    4. 如果occurs是常量引用, 则对occurs递增时会报错
 */

int main(int argc, char const *argv[])
{
    cout << ex6_17_1("abcD") << endl;
    cout << ex6_17_2("ABCD") << endl;
    return 0;
}