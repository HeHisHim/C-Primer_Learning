#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include "myfun.h"
#include <utility>

using namespace std;

void ex11_28(void)
{
    map<string, vector<int>> dict = {{"abc", {1, 2, 3}}, {"cfe", {3, 2, 1}}};
    map<string, vector<int>>::iterator find_it = dict.find("cfe");
    if(find_it != dict.end())
    {
        print_vector_int(find_it->second);
    }
}

// ex11_29
/*
    upper_bound 给定关键字的插入点
    lower_bound 给定关键字的插入点
    equal_range pair(xxxx.end(), xxxx.end())
 */

void ex11_31(void)
{
    multimap<string, string> m_dict = {
        {"abc", "x"}, {"abc", "y"}, {"abc", "z"}, {"tml", "i"}, {"opq", "o"}, {"opq", "q"}
    };
    string key = "abc";
    auto num = m_dict.count(key);
    auto it = m_dict.find(key);
    while(num)
    {
        m_dict.erase(it);
        it = m_dict.find(key);
        num--;
    }
    cout << m_dict.count(key) << endl;
}

int main(int argc, char const* argv[])
{
    // ex11_28();
    ex11_31();
    return 0;
}