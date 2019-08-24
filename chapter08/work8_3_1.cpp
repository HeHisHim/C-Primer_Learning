#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

istream& ex8_9(istream& is)
{
    string val;
    while(is >> val)
    {
        cout << val << endl;
    }
    is.clear();
    return is;
}

void ex8_10(string file_name)
{
    vector<string> texts;
    string text;
    ifstream in(file_name);
    istringstream iss;
    // ostringstream oss;

    while(getline(in, text))
    {
        texts.push_back(text);
    }

    for(auto x : texts)
    {
        iss.str(x);
        cout << iss.str() << endl;
    }
    // cout << oss.str() << endl;
}

int main(int argc, char const* argv[])
{
    // istringstream iss("say my name");
    // ex8_9(iss);
    if(2 == argc)
    {
        ex8_10(argv[1]);
    }
    else
    {
        cout << "no file to input" << endl;
    }
    
    return 0;
}