#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include "myfun.h"

using namespace std;

void ex11_7(void)
{
    map<string, vector<string>> family;
    family.insert({"a", {"a", "b", "c"}});
    family.insert({"b", {"b", "c", "d"}});
    family["c"].push_back("c");
    family["b"].push_back("e");
    for(auto& f : family)
    {
        cout << f.first << " - ";
        for(auto& n : f.second)
        {
            cout << n << " ";
        }
        cout << endl;
    }
}

void ex11_8(void)
{
    vector<string> words = {
        "example", "apple", "banana", "orange", "tea", "apple"
    };
    vector<string> un;
    for(auto& word : words)
    {
        if(find(un.begin(), un.end(), word) == un.end())
        {
            un.push_back(word);
        }
    }
    print_vector(un);
}

int main(int argc, char const* argv[])
{
    // ex11_7();
    ex11_8();
    return 0;
}