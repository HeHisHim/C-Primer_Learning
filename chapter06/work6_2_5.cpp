#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    if(3 == argc)
    {
        string str1 = argv[1], str2 = argv[2];
        str1 += str2;
        cout << str1 << endl;
    }
    for(int x = 0; x < argc; x++)
    {
        cout << argv[x] << endl;
    }
    return 0;
}