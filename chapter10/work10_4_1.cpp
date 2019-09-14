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

void ex10_27(void)
{
    vector<int> vec = {1, 1, 1, 1, 4, 5, 6, 7, 8};
    list<int> lis;
    auto uni = unique(vec.begin(), vec.end());
    // print_vector(vec);
    unique_copy(vec.begin(), uni, back_inserter(lis));
    print_list(lis);
}

void ex10_28(void)
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec_copy1, vec_copy2;
    list<int> vec_copy3;
    copy(vec.begin(), vec.end(), inserter(vec_copy1, vec_copy1.begin()));
    copy(vec.begin(), vec.end(), back_inserter(vec_copy2));
    copy(vec.begin(), vec.end(), front_inserter(vec_copy3));
    print_vector(vec_copy1);
    print_vector(vec_copy2);
    print_list(vec_copy3);
}

int main(int argc, char const* argv[])
{
    // ex10_27();
    ex10_28();
    return 0;
}