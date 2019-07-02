#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

void ex3_41(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> nums(begin(arr), end(arr));
    // vector<int> nums(arr, arr + 5);

    for(auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
}

void ex3_42(void)
{
    vector<int> nums = {1, 2, 3, 4, 5};
    const int size = nums.size();
    int arr[size];

    for(int x = 0; x < size; x++)
    {
        arr[x] = nums[x];
    }

    for(auto x : arr)
    {
        cout << x << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    // ex3_41();
    ex3_42();
    return 0;
}