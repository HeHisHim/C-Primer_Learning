#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

bool ex9_15(vector<int>& x, vector<int>& y)
{
    if(x.size() != y.size())
    {
        return false;
    }
    vector<int>::const_iterator xbegin = x.cbegin();
    vector<int>::const_iterator ybegin = y.cbegin();
    vector<int>::const_iterator xend = x.cend();
    vector<int>::const_iterator yend = y.cend();
    for(; xbegin != xend | ybegin != yend; xbegin++, ybegin++)
    {
        if(*xbegin != *ybegin)
        {
            return false;
        }
    }
    return true;
}

bool ex9_16(list<int>& x, vector<int>& y)
{
    if(x.size() != y.size())
    {
        return false;
    }
    list<int>::const_iterator xbegin = x.cbegin();
    vector<int>::const_iterator ybegin = y.cbegin();
    list<int>::const_iterator xend = x.cend();
    vector<int>::const_iterator yend = y.cend();
    for(; xbegin != xend | ybegin != yend; xbegin++, ybegin++)
    {
        if(*xbegin != *ybegin)
        {
            return false;
        }
    }
    return true;
}


int main(int argc, char const* argv[])
{
    vector<int> x = {1, 2, 3, 4};
    // vector<int> y = {0, 9};
    // cout << ex9_15(x, y) << endl;
    list<int> y = {1, 2, 3, 4};
    cout << ex9_16(y, x) << endl;
    return 0;
}