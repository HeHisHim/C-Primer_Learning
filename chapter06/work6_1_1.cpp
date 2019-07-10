#include <iostream>

using namespace std;

size_t ex6_7(void)
{
    static size_t call = 0;
    return call++;
}


int main(int argc, char const *argv[])
{
    for(int x = 0; x < 10; x++)
    {
        cout << ex6_7() << endl;
    }
    return 0;
}