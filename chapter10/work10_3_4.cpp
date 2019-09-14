#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>
#include "myfun.h"

using namespace std;
using namespace placeholders;

bool check_size(string& word, unsigned sz)
{
    return word.size() < sz;
}

void ex10_22(vector<string>& words, unsigned sz)
{
    auto x = count_if(words.begin(), words.end(), bind(check_size, _1, sz));
    cout << x << endl;
}

void ex10_24(string word)
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    // auto result = find_if(vec.begin(), vec.end(), bind(check_size, word, _2));
    auto result = find_if(vec.begin(), vec.end(), bind(check_size, word, _1));
    // cout << *result << endl;
    cout << *result << endl;
}

int main(int argc, char const* argv[])
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "banana"};
    // ex10_22(words, 4);
    ex10_24("abc");
    return 0;
}