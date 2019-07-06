#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex5_21(void)
{
    string str, curStr;
    bool mark = false;
    while(cin >> curStr)
    {
        if(toupper(curStr[0]) != curStr[0])
        {
            continue;
        }
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
    ex5_21();
    return 0;
}