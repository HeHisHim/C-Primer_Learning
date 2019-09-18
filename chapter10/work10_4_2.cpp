#include <iostream>
#include <fstream>
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

void ex10_29(void)
{
    vector<string> words;
    ifstream filestream("txt_10_4_2.txt");
    istream_iterator<string> in(filestream);
    istream_iterator<string> eof;
    while (in != eof)
    {
        words.push_back(*in);
        in++;
    }
    print_vector(words);
}

void ex10_30(void)
{
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, " ");
    vector<int> nums;
    auto iter = back_inserter(nums);
    copy(in, eof, iter);
    sort(nums.begin(), nums.end());
    for(auto x : nums)
    {
        out = x;
    }
    cout << endl;
}

void ex10_31(void)
{
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, " ");
    vector<int> nums;
    auto iter = back_inserter(nums);
    unique_copy(in, eof, iter);
    for(auto x : nums)
    {
        out = x;
    }
    cout << endl;
}

int main(int argc, char const* argv[])
{
    // ex10_29();
    // ex10_30();
    ex10_31();
    return 0;
}