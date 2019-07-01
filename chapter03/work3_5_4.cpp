#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

void ex3_40(void)
{
    const char ca1[] = "hello";
    const char ca2[] = "world";
    const unsigned size = strlen(ca1) + strlen(ca2) + 2; //ca1长度 + ca2长度 + 1个空格 + 1个空字符
    char target[size];
    strcpy(target, ca1);
    strcat(target, " ");
    strcat(target, ca2);
    cout << target << endl;
}

int main(int argc, char const *argv[])
{
    ex3_40();
    return 0;
}