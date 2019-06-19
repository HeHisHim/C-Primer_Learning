#include <iostream>

void ex1_18(void)
{
    int currVal = 0, val = 0;

    if(std::cin >> currVal)
    {
        int cnt = 1;
        while(std::cin >> val)
        {
            if(val == currVal)
            {
                cnt++;
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
            
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    ex1_18();
    return 0;
}