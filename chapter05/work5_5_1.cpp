#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex5_20(void)
{
    string str, curStr;
    bool mark = false;
    while(cin >> curStr)
    {
        if(curStr == str)
        {
            mark = true;
            cout << "The repeated string is " << str << endl;
            break;
        }
        str = curStr;
    }

    if(!mark)
    {
        cout << "string no repetition" << endl;
    }
}

int main(int argc, char const *agrv[])
{
    ex5_20();
    return 0;
}