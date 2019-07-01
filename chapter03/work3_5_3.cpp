#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

// ex3_34
/*
    p1(int *), p2(int *)
    p1 += p2 - p1
    编译器不支持指针相加, 会导致编译错误
    p1 += (p2 - p1), 这样加括号就能通过编译, 表示先计算出p1和p2的距离x, 再将p1向前移动x
 */

void ex3_35(void)
{
    int nums[10] = {};
    for(int* ptr = begin(nums); ptr != end(nums); ++ptr)
    {
        *ptr = 0;
    }

    for(auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
}

bool ex3_36(int* a, int* b)
{
    // 获取首尾指针
    int *abegin = begin(a), *aend = end(a);
    int *bbegin = begin(b), *bend = end(b);

    // 长度不等直接返回
    if((aend - abegin) != (bend - bbegin))
    {
        return false;
    }
    
    // 每一个元素都判断是否相等
    while((abegin != aend) && (bbegin != bend))
    {
        if(*abegin != *bbegin)
        {
            return false;
        }
        abegin++;
        bbegin++;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    // ex3_35();
    int num1[5] = {1, 2, 3, 4, 5};
    int num2[4] = {2, 3, 4, 5};
    cout << ex3_36(num1, num2) << endl;
    return 0;
}