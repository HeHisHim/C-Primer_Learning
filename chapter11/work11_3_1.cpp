#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include "myfun.h"
#include <utility>

using namespace std;

// ex11_15
/*
    mapped_type: vector<int>
    key_type: int
    value_type: pair<int, vector<int>>
 */

void ex11_16(void)
{
    map<string, size_t> word_count = {{"apple", 5}, {"banana", 6}, {"orange", 6}};
    auto map_it = word_count.begin();
    while(map_it != word_count.end())
    {
        map_it->second = 100;
        map_it++;
    }

    for(auto& wc : word_count)
    {
        cout << wc.first << " - " << wc.second << endl;
    }
}

int main(int argc, char const* argv[])
{
    ex11_16();
    return 0;
}

