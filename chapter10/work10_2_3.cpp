#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "myfun.h"

using namespace std;

void ex10_9(void)
{
    string target("the quick red fox jumps over the slow red turtle");
    vector<string> elimDups;
    string::const_iterator first = target.cbegin();
    string::const_iterator begin = target.cbegin();
    while(begin != target.cend())
    {
        if(' ' == *begin)
        {
            elimDups.push_back(string(first, begin));
            first = begin + 1;
        }
        begin++;
    }
    elimDups.push_back(string(first, target.cend()));

    sort(elimDups.begin(), elimDups.end());
    print_vector(elimDups);

    auto delete_iterator = unique(elimDups.begin(), elimDups.end());
    print_vector(elimDups);
    
    elimDups.erase(delete_iterator, elimDups.end());
    print_vector(elimDups);
}

int main(int argc, char const* argv[])
{
    ex10_9();
    return 0;
}