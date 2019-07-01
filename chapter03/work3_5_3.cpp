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

bool ex3_36(int* a, int* b, int size1, int size2)
{
    if(size1 != size2)
    {
        return false;
    }

    int asize = 0, bsize = 0;
    while((asize != size1) && (bsize != size2))
    {
        if(a[asize] != b[bsize])
        {
            return false;
        }
        asize++;
        bsize++;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    // ex3_35();
    int num1[5] = {1, 2, 3, 4, 5};
    int num2[5] = {1, 2, 3, 4, 5};
    cout << ex3_36(num1, num2, 5, 5) << endl;
    return 0;
}