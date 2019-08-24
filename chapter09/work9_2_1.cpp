#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

bool ex9_4(vector<int>::iterator vbegin, vector<int>::iterator vend, int find)
{
    if(vbegin == vend)
    {
        return false;
    }
    while(vbegin != vend)
    {
        if(find == *vbegin)
        {
            return true;
        }
        vbegin++;
    }
    return false;
}

vector<int>::iterator ex9_5(vector<int>::iterator vbegin, vector<int>::iterator vend, int find)
{
    if(vbegin == vend)
    {
        return vend;
    }
    while(vbegin != vend)
    {
        if(find == *vbegin)
        {
            return vbegin;
        }
        vbegin++;
    }
    return vend;
}

int main(int argc, char const* argv[])
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    // cout << ex9_4(vec.begin(), vec.end(), 9) << endl;
    cout << *ex9_5(vec.begin(), vec.end(), 5) << endl;
    return 0;
}