#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <new>
#include "strblob.h"

using namespace std;

void ex12_20(void)
{
    StrBlob strb({"apple", "orange", "banana"});
    StrBlobPtr strbptr(strb);
    auto idx = strb.size();
    while(idx)
    {
        cout << strbptr.deref() << endl;
        strbptr.incr();
        idx--;
    }
}

int main(int argc, char const* argv[])
{
    ex12_20();
    return 0;
}