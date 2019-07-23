#include <iostream>
#include <vector>
#include <string>
#include "person.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Person person(cin);
    // read(cin, person);
    print(cout, person) << endl;
    return 0;
}