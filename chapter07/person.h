#include <string>

using namespace std;

struct Person
{
    string name;
    string address;
    string get_name(string x = "ji") const
    {
        return name;
    }
    string get_address() const
    {
        return address;
    }
};