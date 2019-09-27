#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include "myfun.h"
#include <utility>

using namespace std;

void ex11_20(void)
{
    vector<string> words = {
        "example", "Example", "apple", "banana", "orange", "tea",
        "bag", "potato", "Potato"
    };
    map<string, size_t> word_count;
    for(auto& word : words)
    {
        for(auto& w : word)
        {
            w = tolower(w);
        }
        auto res = word_count.insert({word, 1});
        if(!res.second)
        {
            res.first->second++;
        }
    }

    for(auto& wc : word_count)
    {
        cout << wc.first << " - " << wc.second << endl; 
    }
}

// ex11_22
/*
    参数类型: pair<string, vector<int>>
    返回类型: pair<map<string, vector<int>>::iterator, bool>
 */


int main(int argc, char const* argv[])
{
    ex11_20();
    return 0;
}