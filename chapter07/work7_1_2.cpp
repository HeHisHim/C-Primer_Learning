#include <iostream>
#include <vector>
#include <string>
// ex7_4 ex7_5
#include "person.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Person person;
    person.name = "abc";
    person.address = "street";

    cout << person.get_name() << endl;
    cout << person.get_address() << endl;
    return 0;
}