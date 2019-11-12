#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>
#include <cstring>
#include "textquery.h"

using namespace std;

// void runQueries(ifstream& infile)
// {
//     TextQuery tq(infile);
//     while(true)
//     {
//         cout << "enter word to look for, or q to quit";
//         string s;
//         if(!(cin >> s) || "q" == s)
//         {
//             break;
//         }
//         print(cout, tq.query(s)) << endl;
//     }
// }

int main(int argc, char const* argv[])
{
    ifstream infile("textquery.txt");
    TextQuery tq(infile);
    tq.print_query("snowman");
    return 0;
}