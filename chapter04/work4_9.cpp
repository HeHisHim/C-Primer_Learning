#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ex4_29(void)
{
    int x[10], *p = x;
    cout << sizeof(x) / sizeof(*x) << endl; // 10
    cout << sizeof(p) / sizeof(*p) << endl; // 2
}

int main(int argc, char const *argv[])
{
    ex4_29();
    return 0;
}