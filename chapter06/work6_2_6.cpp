#include <iostream>

using namespace std;

void ex6_27(initializer_list<int> lst)
{
    int sum = 0;
    for(const auto x : lst)
    {
        sum += x;
    }
    cout << sum << endl;
}

int main(int argc, char const *argv[])
{
    ex6_27({1, 2, 3, 4});
    ex6_27({8, 9, 10});
    return 0;
}