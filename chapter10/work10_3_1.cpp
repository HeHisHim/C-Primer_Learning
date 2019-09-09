#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "myfun.h"

using namespace std;

bool isShorter(const string& first, const string& second)
{
    return first.size() < second.size();
}

vector<string> elimDups(string target)
{
    vector<string> contains;
    string::const_iterator first = target.cbegin();
    string::const_iterator begin = target.cbegin();
    while(begin != target.cend())
    {
        if(' ' == *begin)
        {
            contains.push_back(string(first, begin));
            first = begin + 1;
        }
        begin++;
    }
    contains.push_back(string(first, target.cend()));
    sort(contains.begin(), contains.end());
    auto delete_iterator = unique(contains.begin(), contains.end());
    contains.erase(delete_iterator, contains.end());

    return contains;
}

void ex10_11(void)
{
    string target("the quick red fox jumps over the slow red turtle");
    vector<string> contains = elimDups(target);
    print_vector(contains);

    stable_sort(contains.begin(), contains.end(), isShorter);
    print_vector(contains);
}

bool find_size_5(string& word)
{
    return word.size() >= 5;
}

void ex10_13(void)
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "banana"};
    vector<string>::iterator iter = partition(words.begin(), words.end(), find_size_5);
    vector<string>::iterator begin = words.begin();
    while(begin != iter)
    {
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
}

int main(int argc, char const* agrv[])
{
    ex10_11();
    // ex10_13();
    return 0;
}