#include <iostream>
#include <string>
#include "Sales_data.h"

int main(int argc, char const *argv[])
{
    Sales_data data1, data2;
    double price = 0.0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = price * data1.units_sold;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = price * data2.units_sold;

    if(data1.bookNo == data2.bookNo)
    {
        std::cout << "bookNo: " << data1.bookNo << std::endl;
        std::cout << "totalPrice: " << data1.revenue + data2.revenue << std::endl;
        std::cout << "averagePrice: " << (data1.revenue + data2.revenue) / (data1.units_sold + data2.units_sold) << std::endl;
    }
    else
    {
        std::cout << "Error, Different bookNo" << std::endl;
    }
    return 0;
}
