#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void ex8_4(void)
{
    ifstream in("mock_file.txt");
    vector<string> texts;
    string text;
    while(getline(in, text))
    {
        texts.push_back(text);
    }

    for(auto x : texts)
    {
        cout << x << endl;
    }
}

int main(int argc, char const* argv[])
{
    ex8_4();
    return 0;
}