#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Y;

class X
{
    public:
        Y *y_object;
};

class Y
{
    public:
        X x_object;
};

int main(int argc, char const* agrv[])
{
    return 0;
}