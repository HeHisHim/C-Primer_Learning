#include <iostream>

using namespace std;

void ex5_25(void)
{
    int x, y, res = 0;
    cout << "Enter two numbers x and y, print x / y" << endl;
    while(cin >> x >> y)
    {
        try
        {
            if(0 == y)
            {
                throw runtime_error("The divisor cannot be zero");
            }
            res = x / y;
            cout << res << endl;
            cout << "Enter two numbers x and y, print x / y" << endl;
        }
        catch(runtime_error err)
        {
            cout << err.what() << "\nTry Again？Enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || 'n' == c)
            {
                break;
            }
            else
            {
                cout << "Enter two numbers x and y, print x / y" << endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    ex5_25();
    return 0;
}