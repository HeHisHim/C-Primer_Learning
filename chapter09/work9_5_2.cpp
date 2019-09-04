#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include "myfun.h"

using namespace std;

void ex9_43(string s, string oldVal, string newVal)
{
    for(string::size_type x = 0; x < s.size() - 2; x++)
    {
        string diff(s, x, oldVal.size());
        if(diff == oldVal)
        {
            s.erase(x, oldVal.size());
            s.insert(x, newVal);
        }
    }
    cout << s << endl;
}

void ex9_44(string s, string oldVal, string newVal)
{
    for(string::size_type x = 0; x < s.size() - 2; x++)
    {
        string diff(s, x, oldVal.size());
        if(diff == oldVal)
        {
            s.replace(x, oldVal.size(), newVal);
        }
    }
    cout << s << endl;
}

string ex9_45(string name, string prefix, string suffix)
{
    string::iterator begin = name.begin();
    string::iterator end = name.end();
    name.insert(begin, prefix.begin(), prefix.end());
    name.append(suffix);
    return name;
}

string ex9_46(string name, string prefix, string suffix)
{
    name.insert(0, prefix);
    name.insert(name.size(), suffix);
    return name;
}

int main(int argc, char const* argv[])
{
    // string s = "thooabcthoed", oldVal = "tho", newVal = "through";
    // ex9_44(s, oldVal, newVal);
    string name = "y", prefix = "Mr.", suffix = ".III";
    cout << ex9_46(name, prefix, suffix) << endl;
    return 0;
}