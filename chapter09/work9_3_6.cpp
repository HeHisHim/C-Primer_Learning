#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include "myfun.h"

using namespace std;

// ex9_32
/*
    iter = vi.insert(iter, *iter++);
    不合法, 求值顺序不确定
 */

// ex9_33
/*
    行为未定义
    向该容器插入元素会导致迭代器失效
 */

void ex9_34(void)
{
    vector<int> vi = {1, 2, 3, 4, 5};
    auto iter = vi.begin();
    while(iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            iter++; // 需让iter++跳过下一个迭代器, 否则行为未定义
        }
        iter++;
    }

    print_vector(vi);
}

int main(int argc, char const* argv[])
{
    ex9_34();
    return 0;
}