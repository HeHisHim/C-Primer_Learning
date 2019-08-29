#include <deque>
#include <vector>
#include <list>
#include <string>
#include <forward_list>
#include <iostream>

void print_vector(std::vector<int>& numbers)
{
    for(auto x : numbers)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void print_deque(std::deque<int>& numbers)
{
    for(auto x : numbers)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void print_list(std::list<int>& numbers)
{
    for(auto x : numbers)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

void print_forward_list(std::forward_list<std::string>& numbers)
{
    for(auto x : numbers)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}