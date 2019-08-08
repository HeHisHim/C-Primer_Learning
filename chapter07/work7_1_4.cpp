#include <iostream>
#include <vector>
#include <string>
#include "person.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // Person person("say my name", "street");
    Person person(cin);
    print(cout, person) << endl;
    return 0;
}