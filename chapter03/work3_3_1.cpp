#include <iostream>
#include <vector>

using namespace std;

void ex3_12(void)
{
    vector<vector<int>> ivec; // True 相当于一个空的二维数组, [[]]
    // vector<string> svec = ivec; // Error 类型不匹配
    vector<string> svec(10, "null"); // True - 10 * "null"

    // for(auto vec : svec)
    // {
    //     cout << vec << endl;
    // }
}

void ex3_13(void)
{
    vector<int> v1; // 0
    vector<int> v2(10); // 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    vector<int> v3(10, 42); // 42, 42, 42, 42, 42, 42, 42, 42, 42, 42
    vector<int> v4{10}; //10
    vector<int> v5{10, 42}; // 10, 42
    vector<string> v6{10}; // 10 * ""
    vector<string> v7{10, "hi"}; // 10 * "hi"

    for(auto v : v7)
    {
        cout << v << endl;
    }
}


int main(int argc, char const *argv[])
{
    // ex3_12();
    ex3_13();
    return 0;
}