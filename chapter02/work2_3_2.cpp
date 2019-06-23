#include <iostream>

void ex2_18(void)
{
    int x = 100;
    int* px = &x;

    *px = 99;
    px = nullptr;

    std::cout << x << " " << px << " " << std::endl;
}

void ex2_20(void)
{
    int i = 42;
    int* p1 = &i;
    *p1 = *p1 * *p1; // i = *p1 = 1764

    std::cout << i << " " << *p1 << " " << p1 << std::endl;
}

// ex2_22
/*
    if(p) -- 判断p是否空指针
    if(*p) -- 判断p指向的对象是否为空
 */

// ex2_23
/*
直接对p做布尔判断, if(p)
 */

//ex2_24
/*
指针类型必须与指向对象的数据类型一致
 */
void ex2_24(void)
{
    int i = 42;
    void* p = &i; // void*是特殊的指针类型, 可以存放任意对象的地址, 但不能操作指向的对象
    // long* lp = &i; //error 指针类型必须与指向对象的数据类型一致

    std::cout << i << " " << p << std::endl; 
}

int main(int argc, char const *argv[])
{
    // ex2_18();
    // ex2_20();
    ex2_24();
    return 0;
}