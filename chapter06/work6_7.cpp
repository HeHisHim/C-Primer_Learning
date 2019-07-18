#include <iostream>
#include <vector>
#include <string>

using namespace std;

int ex6_54(int, int);

int ex6_55_1(int x, int y)
{
    return x + y;
}

int ex6_55_2(int x, int y)
{
    return x - y;
}

int ex6_55_3(int x, int y)
{
    return x * y;
}

int ex6_55_4(int x, int y)
{
    return x / y;
}

int main(int argc, char const* argv[])
{
    vector<int(*)(int, int)> funcp = {ex6_55_1, ex6_55_2, ex6_55_3, ex6_55_4};
    for(auto x : funcp)
    {
        cout << x(8, 4) << endl;
    }
    return 0;
}