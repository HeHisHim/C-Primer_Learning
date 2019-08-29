#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include "myfun.h"

using namespace std;

void ex9_27(void)
{
    forward_list<int> farr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto farr_before_begin = farr.before_begin();
    auto farr_begin = farr.begin();
    while(farr_begin != farr.end())
    {
        if(*farr_begin % 2)
        {
            farr_begin = farr.erase_after(farr_before_begin);
        }
        else
        {
            farr_before_begin = farr_begin;
            farr_begin++;
        }
    }
    // print_forward_list(farr);
}

void ex9_28(forward_list<string>& farr, const string x, const string y)
{
    auto farr_before_begin = farr.before_begin();
    auto farr_begin = farr.begin();
    while(farr_begin != farr.end())
    {
        if(*farr_begin == x)
        {
            farr.insert_after(farr_begin, y);
            break;
        }
        else
        {
            farr_before_begin = farr_begin;
            farr_begin++;
        }
    }

    if(farr_begin == farr.end())
    {
        farr.insert_after(farr_before_begin, y);
    }

    print_forward_list(farr);
}

int main(int argc, char const* argv[])
{
    // ex9_27();
    forward_list<string> farr = {"a", "b", "c", "d", "e", "g"};
    ex9_28(farr, "a", "f");
    return 0;
}