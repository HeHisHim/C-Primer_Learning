#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex3_14(void)
{
    int num;
    vector<int> nums;
    while (cin >> num)
    {
        nums.push_back(num);
    }

    for(auto x : nums)
    {
        cout << x << " ";
    }
    
    cout << endl;
}

void ex3_15(void)
{
    string text;
    vector<string> texts;

    while(cin >> text)
    {
        texts.push_back(text);
    }

    for(auto x : texts)
    {
        cout << x << " ";
    }
    cout << endl;
}


int main(int argc, char const *argv[])
{
    // ex3_14();
    ex3_15();
    return 0;
}