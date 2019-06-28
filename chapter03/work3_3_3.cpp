#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex3_17(void)
{
    string text;
    vector<string> texts;

    while(cin >> text)
    {
        texts.push_back(text);
    }

    for(decltype(texts.size()) x = 0; x < texts.size(); x++)
    {
        for(decltype(texts[x].size()) y = 0; y < texts[x].size(); y++)
        {
            texts[x][y] = toupper(texts[x][y]);
        }
    }

    for(auto x : texts)
    {
        cout << x << " ";
    }
    cout << endl;
}

void ex3_20(void)
{
    int num;
    vector<int> nums;
    decltype(nums.size()) x, y;

    while(cin >> num)
    {
        nums.push_back(num);
    }

    cout << nums.size() << endl;
    for(decltype(nums.size()) x = 0; x < nums.size() - 1; x++)
    {
        cout << nums[x] + nums[x + 1] << " ";
    }

    cout << endl;

    for(x = 0, y = nums.size() - 1; x < y; x++, y--)
    {
         cout << nums[x] + nums[y] << " ";
    }

    if(x == y)
    {
        cout << nums[x] << endl;
    }
    else
    {
        cout << endl;
    }
    
}

int main(int argc, char const *agrv[])
{
    // ex3_17();
    ex3_20();
    return 0;
}