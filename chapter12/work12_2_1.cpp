#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>
#include <cstring>

using namespace std;

void ex12_23()
{
    char x[] = "hello", y[] = "world";
    auto sz = (sizeof(x) / sizeof(char) + sizeof(y) / sizeof(char) - 2);
    char* cp = new char[sz + 1];
    strcat(cp, x);
    strcat(cp, y);
    cout << cp << endl;

    string a = "apple", b = "pen";
    char* sp = new char[a.size() + b.size() + 1];
    // a.append(b);
    strcat(sp, a.c_str());
    strcat(sp, b.c_str());
    cout << sp << endl;
}

int main(int argc, char const* argv[])
{
    ex12_23();
    return 0;
}