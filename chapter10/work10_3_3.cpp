#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "myfun.h"

using namespace std;

void ex10_20(vector<string>& words, unsigned sz)
{
    auto x = count_if(words.begin(), words.end(), [sz](string& word){return word.size() > sz;});
    cout << x << endl;
}

void ex10_21(void)
{
    int x = 10;
    auto result = [&x]()->bool {while(x)x--; return true;};
    cout << result() << endl;
    cout << x << endl;
}

int main(int argc, char const* argv[])
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "banana"};
    // ex10_20(words, 6);
    ex10_21();
    return 0;
}