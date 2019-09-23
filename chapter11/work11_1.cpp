#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

void ex11_3(void)
{
    vector<string> words = {
        "example", "Example", "apple", "banana", "orange", "tea",
        "bag", "potato", "Potato"
    };
    map<string, size_t> word_count;
    for(auto word : words)
    {
        for(auto& w : word)
        {
            w = tolower(w);
        }
        ++word_count[word];
    }

    for(auto& wc : word_count)
    {
        cout << wc.first << " - " << wc.second << endl; 
    }

}

int main(int argc, char const* argv[])
{
    ex11_3();
    return 0;
}