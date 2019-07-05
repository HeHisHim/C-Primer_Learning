#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool ex5_17(vector<int> num1, vector<int> num2)
{
    // if(num1.size() < nums2.size())
    // {

    // }
    vector<int> cpnum1, cpnum2;
    num1.size() < num2.size() ? (cpnum1 = num1, cpnum2 = num2) : (cpnum1 = num2, cpnum2 = num1);

    for(decltype(cpnum1.size()) x = 0; x != cpnum1.size(); x++)
    {
        if(!(cpnum1[x] == cpnum2[x]))
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char const *agrv[])
{
    vector<int> num1 = {0, 1, 1, 2};
    vector<int> num2 = {0, 1, 1, 2, 3, 5, 8};
    
    if(ex5_17(num1, num2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    
    return 0;
}