#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ex5_10(void)
{
    unsigned vowel = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char word;
    while(cin >> word)
    {
        for(int x = 0; x < 5; x++)
        {
            if(tolower(word) == vowels[x])
            {
                vowel++;
            }
        }
    }

    cout << vowel << endl;
}

void ex5_12(void)
{
    unsigned ffCnt, flCnt, fiCnt;
    ffCnt = flCnt = fiCnt = 0;
    bool record = false;
    char word;
    while(cin >> word)
    {
        if(record)
        {
            if('f' == word)
            {
                ffCnt++;
            }
            else if('l' == word)
            {
                flCnt++;
            }
            else if('i' == word)
            {
                fiCnt++;
            }
            record = false;
        }
        else if('f' == word && !record)
        {
            record = true;
        }
    }

    cout << ffCnt << " " << flCnt << " " << fiCnt << endl;
}

int main(int argc, char const *agrv[])
{
    // ex5_10();
    ex5_12();
    return 0;
}