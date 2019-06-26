#include <iostream>
#include <string>

using namespace std;

void ex3_2(void)
{
    string word;
    while(getline(cin, word))
    {
        cout << word << endl;
    }
}

// ex3_3
/*
    输入运算符遇到空白符则丢弃
    getline遇到换行符才将换行符前的字符读入string对象
 */

void ex3_4(void)
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if(str1 != str2)
    {
        if(str1.size() > str2.size())
        {
            cout << str1 << endl;
        }
        else if(str1 > str2)
        {
            cout << str1 << endl;
        }
        else
        {
            cout << str2 << endl;
        }
    }
    else
    {
        cout << "Same strings" << endl;
    }
}

void ex3_5(void)
{
    string bigWord, word;
    unsigned index = 1;

    while(cin >> word)
    {
        if(index)
        {
            bigWord += word;
            index = 0;
            continue;
        }
        bigWord = bigWord + " " + word;
    }
    cout << bigWord << endl;
    cout << bigWord.size() << endl;
}

int main(int argc, char const *argv[])
{
    // ex3_2();
    // ex3_4();
    ex3_5();
    return 0;
}