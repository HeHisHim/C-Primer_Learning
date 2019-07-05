#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex5_14(void)
{
    vector<string> strs;
    unsigned count = 1, recordCount = 1;
    string str, curStr, resStr;
    while(cin >> curStr)
    {
        if(str == curStr)
        {
            count++;
        }
        else
        {
            if("" == resStr)
            {
                resStr = str;
                recordCount = count;
            }
            else
            {
                if(count > recordCount)
                {
                    resStr = str;
                    recordCount = count;
                }
            }
            str = curStr;
            count = 1;
        }
    }

    if(count > recordCount)
    {
        resStr = str;
        recordCount = count;
    }

    cout << resStr << " " << recordCount << endl;
}

int main(int argc, char const *agrv[])
{
    ex5_14();
    return 0;
}