#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex5_19(void)
{
    string str1, str2, check;
    do
    {
        cout << "Enter two strings" << endl;
        cin >> str1 >> str2;
        if(str1.size() > str2.size())
        {
            cout << "The shorter string is " << str2 << endl;
        }
        else
        {
            cout << "The shorter string is " << str1 << endl;
        }
        
        cout << "More?" << endl;
        cin >> check;
    } while (!check.empty() && !('n' == check[0]));
    
}

int main(int argc, char const *agrv[])
{
    ex5_19();
    return 0;
}