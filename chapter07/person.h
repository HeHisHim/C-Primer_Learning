#include <string>
#include <iostream>

using namespace std;

// // ex7_4 ex7_5
// struct Person
// {
//     string name;
//     string address;
//     string get_name() const
//     {
//         return name;
//     }
//     string get_address() const
//     {
//         return address;
//     }
// };

// // ex7_9
// istream& read(istream& is, Person& person)
// {
//     is >> person.name >> person.address;
//     return is;
// }
// ostream& print(ostream& os, const Person& person)
// {
//     os << "name: " << person.name << endl;
//     os << "address: " << person.address;
//     return os;
// }

// ex7_19
class Person
{
    friend istream& read(istream&, Person& person);
    friend ostream& print(ostream&, const Person& person);
    private:
        string name;
        string address;
    public:
        string get_name() const
        {
            return name;
        }
        string get_address() const
        {
            return address;
        }
        Person() = default;
        Person(string name, string address): name(name), address(address){}
        Person(istream&);
};

//ex7_22
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

Person::Person(istream& is)
{
    read(is, *this);
}