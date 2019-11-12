#include <iostream>
#include <memory>
#include <vector>
#include <stdexcept>
#include <string>
#include <new>
#include <fstream>
#include <map>
#include <set>

using namespace std;

class TextQuery
{
    public:
        TextQuery(ifstream& infile);
        void print_query(string word);
    private:
        vector<string> texts;
        map<string, set<int>> word_line;
};

TextQuery::TextQuery(ifstream& infile)
{
    string text;
    while(getline(infile, text))
    {
        texts.push_back(text);
        string::size_type position = 0;
        string::size_type idx = text.find(" ", position);
        while(text.npos != idx)
        {
            string curr_word = string(text.begin() + position, text.begin() + idx);
            word_line[curr_word].insert(texts.size() - 1);
            position = idx + 1;
            idx = text.find(" ", position);
        }
    }
}

void TextQuery::print_query(string word)
{
    auto set_line = word_line[word];
    set<int>::iterator it;
    cout << word << " has " << set_line.size() << " items" << endl;
    for(it = set_line.begin(); it != set_line.end(); it++)
    {
        cout << "line<" << *it + 1 << "> " << texts[*it] << endl;
    }
}