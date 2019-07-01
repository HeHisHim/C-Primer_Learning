#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

void ex3_22(void)
{
    vector<string> text;
    string curText;
    while (cin >> curText)
    {
        text.push_back(curText);
    }

    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for(auto c = it->begin(); c != it->end(); ++c)
        {
            *c = toupper(*c);
        }
    }

    for(auto it = text.cbegin(); it != text.cend(); ++it)
    {
        cout << *it << endl;
    }
}

void ex3_23(void)
{
    vector<int> nums;
    default_random_engine e;
    for(int x = 0; x < 10; ++x)
    {
        nums.push_back(e());
    }

    for(auto x = nums.begin(); x != nums.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;

    for(auto x = nums.begin(); x != nums.end(); x++)
    {
        *x = 2 * *x;
    }

    for(auto x = nums.begin(); x != nums.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // ex3_22();
    ex3_23();
    return 0;
}