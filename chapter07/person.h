#include <string>
#include <iostream>

using namespace std;

// ex7_4 ex7_5
struct Person
{
    string name;
    string address;
    string get_name() const
    {
        return name;
    }
    string get_address() const
    {
        return address;
    }
};

// ex7_9
istream& read(istream& is, Person& person)
{
    is >> person.name >> person.address;
    return is;
}
ostream& print(ostream& os, const Person& person)
{
    os << "name: " << person.name << endl;
    os << "address: " << person.address;
    return os;
}
