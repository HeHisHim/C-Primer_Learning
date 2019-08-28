#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using namespace std;

void print_container(deque<int>& numbers)
{
    for(auto x : numbers)
    {
        cout << x << endl;
    }
}

void ex9_18(void) // ex9_19
{
    // deque<string> texts;
    list<string> texts;
    string text;
    while(cin >> text)
    {
        texts.push_back(text);
    }

    auto begin = texts.begin();
    while(begin != texts.end())
    {
        cout << *begin << endl;
        begin++;
    }
}

void ex9_20(void)
{
    list<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd;
    deque<int> even;
    for(auto n : numbers)
    {
        if(0 == n % 2)
        {
            even.push_back(n);
        }
        else
        {
            odd.push_back(n);
        }
    }

    print_contain(odd);
    print_contain(even);
}

int main(int argc, char const* argv[])
{
    // ex9_18();
    ex9_20();
    return 0;
}