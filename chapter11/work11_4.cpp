#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "myfun.h"
#include <utility>

using namespace std;

void ex11_38(void)
{
    unordered_map<string, size_t> un_map;
    vector<string> words = {
        "example", "Example", "apple", "banana", "orange", "tea",
        "bag", "potato", "Potato"
    };
    for(auto word : words)
    {
        for(auto& w : word)
        {
            w = tolower(w);
        }
        un_map[word]++;
    }
    
    for(auto x : un_map)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main(int argc, char const* argv[])
{
    ex11_38();
    return 0;
}