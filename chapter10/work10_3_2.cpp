#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "myfun.h"

using namespace std;

void ex10_14(void)
{
    auto lambda_sum = [](int x, int y){return x + y;};
    cout << lambda_sum(1, 10) << endl;
}

void ex10_15(void)
{
    int x = 100;
    auto lambda_sum = [x](int y){return x + y;};
    cout << lambda_sum(2) << endl;
}

int main(int argc, char const* argv[])
{
    // ex10_14();
    ex10_15();
    return 0;
}