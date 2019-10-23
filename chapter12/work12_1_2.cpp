#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>

using namespace std;

void cin_vector(vector<int>* pvec)
{
    int x;
    while(cin >> x)
    {
        pvec->push_back(x);
    }
}

void cin_vector_shared_ptr(shared_ptr<vector<int>> pvec)
{
    int x;
    while(cin >> x)
    {
        pvec->push_back(x);
    }
}

void cout_vector(vector<int>* pvec)
{
    for(auto x : *pvec)
    {
        cout << x << " ";
    }
    cout << endl;
}

void cout_vector_shared_ptr(shared_ptr<vector<int>> pvec)
{
    for(auto x : *pvec)
    {
        cout << x << " ";
    }
    cout << endl;
}

void ex12_6(void)
{
    vector<int>* pvec = new vector<int>();
    cin_vector(pvec);
    cout_vector(pvec);
    delete pvec;
}

void ex12_7(void)
{
    auto pvec = make_shared<vector<int>>();
    cin_vector_shared_ptr(pvec);
    cout_vector_shared_ptr(pvec);
}

int main(int argc, char const* argv[])
{
    // ex12_6();
    ex12_7();
    return 0;
}