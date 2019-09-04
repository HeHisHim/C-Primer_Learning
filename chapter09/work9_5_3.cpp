#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include "myfun.h"

using namespace std;

void ex9_47(void)
{
    string text = "ab2c3d7R4E6";
    string number = "23476";
    string::size_type pos = 0;
    while((pos = text.find_first_of(number, pos)) != string::npos)
    {
        cout << text[pos] << " ";
        pos++;
    }
    cout << endl;
    pos = 0;
    while((pos = text.find_first_not_of(number, pos)) != string::npos)
    {
        cout << text[pos] << " ";
        pos++;
    }
    cout << endl;
}

void ex9_48(void)
{
    string numbers = "0123456789", name = "r2d2";
    if(numbers.find(name) == string::npos)
    {
        cout << "No Match" << endl;
    }
    else
    {
        cout << "Match" << endl;
    }
}

int main(int argc, char const* argv[])
{
    // ex9_47();
    ex9_48();
    return 0;
}