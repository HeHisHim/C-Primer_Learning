#include <iostream>
#include "Sales_item.h"

void ex1_20(void)
{
    Sales_item bookItem;
    std::cin >> bookItem;
    std::cout << bookItem << std::endl;
}

void ex1_21(void)
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
}

void ex1_22(void)
{
    Sales_item curItem, item;
    if(std::cin >> item)
    {
        while(std::cin >> curItem)
        {
            item += curItem;
        }
    }
    std::cout << item << std::endl;
}

int main(int argc, char const *argv[])
{
    // ex1_20();
    // ex1_21();
    ex1_22();
    return 0;
}