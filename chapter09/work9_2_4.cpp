#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char const* argv[])
{
    list<int> list_int = {1, 2, 3, 4, 5};
    vector<int> vec_int = {2, 2, 3, 4};
    // vector<double> vec_double(list_int.begin(), list_int.end());
    vector<double> vec_double(vec_int.begin(), vec_int.end());
    for(auto x : vec_double)
    {
        cout << x << endl;
    }
    return 0;
}