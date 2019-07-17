#include <iostream>
#include <vector>
using namespace std;

// ex6_32 successful operation
int& get(int* arry, int index)
{
    return arry[index];
}

void ex6_33(const vector<int> vec, size_t index)
{
    if(index < vec.size())
    {
        cout << vec[index] << endl;
        return ex6_33(vec, index + 1);
    }
}

int main(int argc, char const *argv[])
{
    // int ia[10];
    // for(int i = 0; i != 10; ++i)
    // {
    //     get(ia, i) = i;
    // }
    vector<int> vec = {7, 8, 34, 123, -23, 4};
    ex6_33(vec, 0);

    return 0;
}