#include <iostream>

using namespace std;

int ex6_4(int x)
{
    int val = 1;
    while(x)
    {
        val *= x--;
    }
    return val;
}

void ex6_5(int x)
{
    cout << abs(x) << endl;
}

int main(int argc, char const *argv[])
{
    // int x;
    // cin >> x;
    // cout << ex6_4(x) << endl;
    ex6_5(-5);
    return 0;
}