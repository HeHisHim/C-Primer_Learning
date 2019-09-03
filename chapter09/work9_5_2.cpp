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
    // s.insert()
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

int main(int argc, char const* argv[])
{
    string s = "thruabcthoed", oldVal = "thru", newVal = "through";
    ex9_43(s, oldVal, newVal);
    return 0;
}