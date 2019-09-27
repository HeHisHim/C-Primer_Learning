#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>
#include "myfun.h"

using namespace std;
using namespace placeholders;

void ex10_42(list<string>& words)
{
    words.sort();
    words.unique();
    print_list(words);
}

int main(int argc, char const* argv[])
{
    list<string> words = {"banana", "apple", "orange", "peach", "apple", "peach"};
    ex10_42(words);
    return 0;
}