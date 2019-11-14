#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>
#include <cstring>
#include "textquery.h"

using namespace std;

void ex12_27(void)
{
    ifstream infile("textquery.txt");
    TextQuery tq(infile);
    while(true)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if(!(cin >> s) || "q" == s)
        {
            break;
        }
        tq.print_query(s);
    }
}

// ex12_31
/*
    set会过滤重复的元素, vector不会, 使用set更好
 */

int main(int argc, char const* argv[])
{
    ex12_27();
    return 0;
}