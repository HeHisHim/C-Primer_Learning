#include <iostream>
#include <string>
#include <vector>

using namespace std;

istream& ex8_1(istream& is)
{
    string val;
    while(is >> val)
    {
        cout << val << endl;
    }
    is.clear();
    return is;
}

int main(int argc, char const* argv[])
{
    ex8_1(cin);
    return 0;
}
