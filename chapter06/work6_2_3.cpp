#include <iostream>

using namespace std;

bool ex6_17_1(const string& str)
{
    char c;
    for(auto c : str)
    {
        if(c == toupper(c))
        {
            return true;
        }
    }
    return false;
}

const string ex6_17_2(const string& str)
{
    char c;
    string s = str;
    for(auto& c : s)
    {
        c = tolower(c);
    }

    return s;
}


int main(int argc, char const *argv[])
{
    cout << ex6_17_1("abcD") << endl;
    cout << ex6_17_2("ABCD") << endl;
    return 0;
}