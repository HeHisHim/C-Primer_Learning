#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include "myfun.h"

using namespace std;

void ex9_41(void)
{
    vector<char> vchar = {'a', 'e', 'i', 'o', 'u'};
    // auto size = vchar.size() + 1;
    // char target[size];
    // for(int i = 0; i < size; i++)
    // {
    //     target[i] = vchar[i];
    // }
    // target[size] = '\0';
    // string s(target);

    string s(vchar.begin(), vchar.end());
    cout << s << endl;
}

// ex9_42
/*
    使用vector<char> xxx读取字符
    再通过string s(xxx.begin(), xxx.end())初始化sting
 */

int main(int argc, char const* argv[])
{
    ex9_41();
    return 0;
}