#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ex4_21(void)
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    for(auto& x : nums)
    {
        if(0 != x % 2)
        {
            x *= 2;
        }
    }

    for(auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;
}

void ex4_23(void)
{
    string s = "word";
    // string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");

    cout << p1 << endl;
}

int main(int argc, char const *argv[])
{
    // ex4_21();
    ex4_23();
    return 0;
}