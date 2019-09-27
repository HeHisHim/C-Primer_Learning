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

void ex10_34(void)
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    auto rbegin = nums.crbegin();
    while(rbegin != nums.crend())
    {
        cout << *rbegin << " ";
        rbegin++;
    }
    cout << endl;
}

void ex10_35(void)
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    auto end = nums.cend() - 1;
    while(end != nums.begin() - 1)
    {
        cout << *end << " ";
        end--;
    }
    cout << endl;
}

void ex10_36(void)
{
    list<int> nums = {1, 2, 3, 4, 5, 0, 0, 0, 2, 0, 3};
    auto zero = find(nums.crbegin(), nums.crend(), 0);
    cout << *zero << endl;
}

void ex10_37(void)
{
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    list<int> target;
    vector<int>::reverse_iterator first, last;
    auto rbegin = nums.rbegin();
    int index = 1;
    while(rbegin != nums.rend())
    {
        if(3 == index)
        {
            last = rbegin;
        }
        if(7 == index)
        {
            first = rbegin;
        }
        index++;
        rbegin++;
    }
    while(last != first + 1)
    {
        target.push_back(*last);
        last++;
    }
    print_list(target);
}

int main(int argc, char const* argv[])
{
    // ex10_34();
    // ex10_35();
    // ex10_36();
    ex10_37();
    return 0;
}