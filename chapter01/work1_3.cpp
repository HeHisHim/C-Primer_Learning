#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "/*"; //  -- /*
    std::cout << "*/"; // -- */
    // std::cout << /* "*/" */; -- error
    std::cout << /* "*/" /* "/*" */; // --  /* 
    std::cout << std::endl;

    return 0;
}