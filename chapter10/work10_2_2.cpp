#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "myfun.h"

using namespace std;

void ex10_6(void)
{
    vector<int> nums = {1, 2, 3, 4, 5};
    fill_n(nums.begin(), nums.size(), 0);
    print_vector(nums);
}

void ex10_7(void)
{
    // vector<int> vec;
    // auto iter = back_inserter(vec);
    // list<int> lst = {1, 2, 3, 4, 5};
    // copy(lst.cbegin(), lst.cend(), iter);
    // print_vector(vec);

    vector<int> vec;
    vec.resize(10);
    fill_n(vec.begin(), 10, 0);
    print_vector(vec);
}

// ex10_8
/*
    因为back_inserter是一种向容器中添加元素的迭代器
    标准库算法不会改变它们所操作的容器的大小
    但是迭代器可以通过使用容器操作来改变大小
*/

int main(int argc, char const* argv[])
{
    // ex10_6();
    ex10_7();
    return 0;
}