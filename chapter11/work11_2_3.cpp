#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include "myfun.h"
#include <utility>

using namespace std;

void ex11_12(void)
{
    vector<string> words = {
        "example", "apple", "banana", "orange", "tea", "apple"
    };
    map<string, int> word_count;
    vector<pair<string, int>> vp;
    for(auto& x : words)
    {
        word_count.insert({x, x.size()});
    }

    for(auto& wc : word_count)
    {
        vp.push_back({wc.first, wc.second});
    }

    for(auto& p : vp)
    {
        cout << p.first << " - " << p.second << endl;
    }
}

int main(int argc, char const* argv[])
{
    ex11_12();
    return 0;
}