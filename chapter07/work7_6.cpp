#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ex7.57
class Account
{
    public:
        static void rate(double newRate);
        static double rate(void);
    private:
        static double interestRate;
};

double Account::interestRate = 3.14;

void Account::rate(double newRate)
{
    interestRate = newRate;
}

double Account::rate(void)
{
    return interestRate;
}

class Example
{
    public:
        static double rate; // static double rate = 6.5;
        static constexpr int vecSize = 20; // static const int vecSize = 20;
        static vector<double> vec; //static vector<double> vec(vecSize);
};

double Example::rate = 6.5; // double Example::rate;
vector<double> Example::vec(vecSize); //vector<double> Example::vec;

int main(int argc, char const *argv[])
{
    // Account ac;
    // cout << ac.rate() << endl;
    // ac.rate(8.88);
    // cout << ac.rate() << endl;
    return 0;
}