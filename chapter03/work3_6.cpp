#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;
using int_array = int[4]; // 等价于typedef int int_array[4];

int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void ex3_43(void)
{
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 4; y++)
        {
            cout << ia[x][y] << " ";
        }
        cout << endl;
    }
}

void ex3_44(void)
{
    for(int_array* x = ia; x < ia + 3; x++)
    {
        for(int* y = *x; y < *x + 4; y++)
        {
            cout << *y << " ";
        }
        cout << endl;
    }
}

void ex3_45(void)
{
    for(auto x = ia; x < ia + 3; x++)
    {
        for(auto y = *x; y < *x + 4; y++)
        {
            cout << *y << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    // ex3_43();
    // ex3_44();
    ex3_45();
    return 0;
}