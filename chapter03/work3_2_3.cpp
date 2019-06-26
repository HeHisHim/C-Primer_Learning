#include <iostream>
#include <string>

using namespace std;

void ex3_6(void)
{
    string str = "Hello World!!";
    for(auto& c : str)
    {
        c = 'X';
    }
    cout << str << endl; // XXXXXXXXXXXXX
}

void ex3_8(void)
{
    string str = "Hello World!!";
    // for(decltype(str.size()) index = 0; index != str.size(); index++)
    // {
    //     str[index] = 'X';
    // }

    decltype(str.size()) index = 0;
    while(index != str.size())
    {
        str[index] = 'X';
        index++;
    }

    cout << str << endl;
}

void ex3_10(void)
{
    string str, result;
    getline(cin, str);

    for(auto c : str)
    {
        if(!ispunct(c))
        {
            result += c;
        }
    }
    cout << result << endl;
}

// ex3_11
/*
    合法, c的类型是const char*
 */

int main(int argc, char const *argv[])
{
    // ex3_6();
    // ex3_8();
    ex3_10();
    return 0;
}