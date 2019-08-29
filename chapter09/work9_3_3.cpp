#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include "myfun.h"

using namespace std;

void ex9_26(void)
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    int size = sizeof(ia) / sizeof(int);
    vector<int> varr(ia, ia + size);
    list<int> larr(ia, ia + size);

    auto varr_begin = varr.begin();
    while(varr_begin != varr.end())
    {
        if(!(*varr_begin % 2))
        {
            varr_begin = varr.erase(varr_begin);
        }
        else
        {
            varr_begin++;
        }
    }

    auto larr_begin = larr.begin();
    while(larr_begin != larr.end())
    {
        if(*larr_begin % 2)
        {
            larr_begin = larr.erase(larr_begin);
        }
        else
        {
            larr_begin++;
        }
        
    }
    print_vector(varr);
    print_list(larr);
}

int main(int argc, char const* agrv[])
{
    ex9_26();
    return 0;
}