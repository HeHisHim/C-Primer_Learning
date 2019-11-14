#include <iostream>
#include <memory>
#include <vector>
#include <stdexcept>
#include <string>
#include <new>
#include <fstream>
#include <map>
#include <set>
#include <sstream>

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
        istringstream line(text);
        string curr_word;
        while(line >> curr_word)
        {
            word_line[curr_word].insert(texts.size() - 1);
        }
    }
}

void TextQuery::print_query(string word)
{
    auto set_line = word_line.find(word);
    set<int>::iterator it;
    if(set_line != word_line.end())
    {
        cout << word << " has " << set_line->second.size() << " items" << endl;
        for(it = set_line->second.begin(); it != set_line->second.end(); it++)
        {
            cout << "line<" << *it + 1 << "> " << texts[*it] << endl;
        }
    }
    else
    {
        cout << word << " has" << " 0 items" << endl;
    }
}