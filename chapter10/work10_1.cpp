#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void ex10_1(void)
{
    vector<int> nums = {1, 1, 2, 2, 2, 4, 5, 6};
    int target = 2;
    cout << count(nums.cbegin(), nums.cend(), target) << endl;
}

void ex10_2(void)
{
    list<string> texts = {"a", "a", "a", "c", "d"};
    string target = "a";
    cout << count(texts.cbegin(), texts.cend(), target) << endl;
}

int main(int argc, char const* argv[])
{
    // ex10_1();
    ex10_2();
    return 0;
}