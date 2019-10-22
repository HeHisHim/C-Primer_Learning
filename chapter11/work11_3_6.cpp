#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include "myfun.h"
#include <utility>

using namespace std;

void ex11_33(void)
{
    string target("where r u y dont u sent me a pic k thk 18r");
    map<string, string> word_trans = {
        {"k", "okay?"}, {"y", "why"}, {"r", "are"}, {"u", "you"}, {"pic", "picture"},
        {"thk", "thanks!"}, {"18r", "later"}
    };
    string::size_type idx = 1;
    string::iterator it = target.begin();
    string::iterator begin = target.begin();
    while(0 != idx)
    {
        idx = target.find(' ', idx);
        if(idx == target.npos)
        {
            string s(it, target.end());
            if(word_trans.count(s))
            {
                cout << word_trans[s] << " ";
            }
            else
            {
                cout << s << " ";
            }
            break;
        }
        idx++;
        string s(it, begin + idx - 1);
        it = begin + idx;
        if(word_trans.count(s))
        {
            cout << word_trans[s] << " ";
        }
        else
        {
            cout << s << " ";
        }
    }
    cout << endl;
}

int main(int argc, char const* argv[])
{
    ex11_33();
    return 0;
}