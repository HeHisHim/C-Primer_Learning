#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void ex8_7(string target_file)
{
    ifstream in("mock_file.txt");
    // ofstream out(target_file, ostream::app);
    ofstream out(target_file);
    vector<string> texts;
    string text;
    while(getline(in, text))
    {
        out << text << endl;
    }
}

int main(int argc, char const* argv[])
{
    if(2 == argc)
    {
        ex8_7(argv[1]);
    }
    else
    {
        cout << "no target file to output" << endl;
    }
    return 0;
}