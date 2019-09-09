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

void ex10_16(vector<string>& words, unsigned sz)
{
    sort(words.begin(), words.end(), isShorter);
    auto wc = find_if(words.begin(), words.end(), [sz](const string& word){return word.size() > sz;});
    auto count = words.end() - wc;
    cout << count << endl;
    for_each(wc, words.end(), [](const string& word){cout << word << " ";});
    cout << endl;
}

void ex10_18(vector<string>& words, unsigned sz)
{
    sort(words.begin(), words.end(), isShorter);
    vector<string>::iterator iter = partition(words.begin(), words.end(), [sz](const string& word){return word.size() > sz;});
    auto count = iter - words.begin();
    cout << count << endl;
    for_each(words.begin(), iter, [](const string& word){cout << word << " ";});
    cout << endl;
}

int main(int argc, char const* argv[])
{
    // ex10_14();
    // ex10_15();

    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "banana"};
    // ex10_16(words, 4);
    ex10_18(words, 5);
    return 0;
}