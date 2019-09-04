#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include "myfun.h"

using namespace std;

void ex9_50(void)
{
    vector<string> str_inumbers = {"1", "2", "3"};
    int isum = 0;
    for(auto x : str_inumbers)
    {
        isum += stoi(x);
    }
    cout << isum << endl;

    vector<string> str_dnumbers = {"1.1", "2.2", "3.3"};
    double dsum = 0;
    for(auto x : str_dnumbers)
    {
        dsum += stod(x);
    }
    cout << dsum << endl;
}

int main(int argc, char const* argv[])
{
    ex9_50();
    return 0;
}