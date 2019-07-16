#include <iostream>

using namespace std;

int ex6_21(const int x, const int* y)
{
    if(x > *y)
    {
        return x;
    }
    else
    {
        return *y;
    }
}

void ex6_22(int** x, int** y)
{
    int* tmp = nullptr;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char const *argv[])
{
    int x = 10, y = 100;
    int *px = &x, *py = &y;
    // cout << ex6_21(x, &y) << endl;
    
    ex6_22(&px, &py);
    cout << px << " " << py << endl;
    return 0;
}