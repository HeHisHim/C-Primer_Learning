#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

void ex3_25(void)
{
    vector<unsigned> scores(11, 0);
    auto beg = scores.begin();
    unsigned grade;

    while(cin >> grade)
    {
        if(100 >= grade)
        {
            ++(*(beg + grade / 10));
        }
    }

    for(auto beg = scores.begin(); beg != scores.end(); beg++)
    {
        cout << *beg << " ";
    }

    cout << endl;
}


// ex3_26
/*
    "no operator "+" matches these operands"
    (beg + end)相当于迭代器的加法操作, 编译器不支持
 */

int main(int argc, char const *argv[])
{
    // ex3_25();
    return 0;
}