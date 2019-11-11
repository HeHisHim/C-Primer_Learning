#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>
#include <cstring>

using namespace std;

void ex12_26(void)
{
    allocator<string> alloc;
    auto const p = alloc.allocate(3);
    auto q = p;
    string s;
    while(q != p+3 && cin >> s)
    {
        alloc.construct(q++, s);
    }

    for(auto x = p; x < p + 3; x++)
    {
        cout << *x << " ";
    }
    cout << endl;

    while(q != p)
    {
        alloc.destroy(--q);
    }
    alloc.deallocate(p, 3);
}

int main(int argc, char const* argv[])
{
    ex12_26();
    return 0;
}