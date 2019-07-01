#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

static int* ex3_31(void)
{
    static int nums[10];
    for(int x = 0; x < 10; x++)
    {
        nums[x] = x;
    }

    for(auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;

    return nums;
}

void ex3_32(void)
{
    int nums[10];
    int* target = ex3_31();
    for(int x = 0; x < 10; ++x)
    {
        nums[x] = target[x] + 1;
    }

    for(auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
}


int main(int argc, char const *agrv[])
{
    // ex3_31();
    ex3_32();
    return 0;
}