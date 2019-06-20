#include <iostream>
#include "Sales_item.h"

void ex1_23(void) // ex1_24
{
    Sales_item curItem, item;

    if(std::cin >> curItem)
    {
        while(std::cin >> item)
        {
            if(item.isbn() == curItem.isbn())
            {
                curItem += item;
            }
            else
            {
                std::cout << curItem << std::endl;
                curItem = item;
            }
        }
        std::cout << curItem << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    ex1_23();
    return 0;
}