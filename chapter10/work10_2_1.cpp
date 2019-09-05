#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>

using namespace std;

void ex10_3(void)
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int>::value_type sum = 0;
    sum = accumulate(nums.cbegin(), nums.cend(), sum);
    cout << sum << endl;
}

// ex10_4
/*
    丢失精度
 */

// ex10_5
/*
    两个c语言风格的数组的名字保存的是指向首字符的指针，所以equal两个c语言风格的字符串实际上是equal两个字符串的指针
*/

int main(int argc, char const* argv[])
{
    ex10_3();
    return 0;
}