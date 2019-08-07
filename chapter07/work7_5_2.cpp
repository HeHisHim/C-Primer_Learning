#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ex7_41
class Sales_data
{
    public:
        Sales_data(string s, unsigned cnt, double price): bookNo(s), cnt(cnt), price(price)
        {
            cout << "main constructed function" << endl;
        }
        Sales_data(): Sales_data("", 0, 0)
        {
            cout << "Sales_data()" << endl;
        }
        Sales_data(string s): Sales_data(s, 0, 0){cout << "Sales_data(string s)" << endl;}
        Sales_data(istream& is): Sales_data(){cout << "Sales_data(istream& is)" << endl;}
    private:
        string bookNo;
        unsigned cnt = 0;
        double price = 0;
};

int main(int argc, char const *argv[])
{
    Sales_data sd(cin);
    return 0;
}