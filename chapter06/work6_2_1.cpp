#include <iostream>

using namespace std;

void ex6_10(int* x, int* y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char const *argv[])
{
    int x = 10, y = 100;
    cout << x << " " << y << endl;
    ex6_10(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}