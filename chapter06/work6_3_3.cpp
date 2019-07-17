#include <iostream>
#include <vector>
using namespace std;

using strArr = string[10];

string str[10] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

string (&ex6_36(void))[10]
{
    return str;
}

strArr (&ex6_37_1(void))
{
    return str;
}

auto ex6_37_2(void) -> string(&)[10]
{
    return str;
}

decltype(str) &ex6_37_3(void)
{
    return str;
}

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even;
}


int main(int argc, char const *argv[])
{
    // string (&str)[10] = ex6_36();

    strArr (&str) = ex6_37_3();
    // for(int i = 0; i < 10; i++)
    // {
    //     cout << str[i] << endl;
    // }

    int (&arr)[5] = arrPtr(4);

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}