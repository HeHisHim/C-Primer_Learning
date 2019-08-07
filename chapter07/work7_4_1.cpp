#include <iostream>
#include <string>
#include <vector>

using namespace std;

using Type = string;
Type initVal()
{
    return "abc";
}

class Exercise
{
    public:
        using Type = double;
        Type setVal(Type);
        Type initVal(void)
        {
            val = 100;
            return val;
        }
    private:
        int val;
};

// Type Exercise::setVal(Type parm) 直接使用Type会用到最外层的Type(string)类型
// 而类内声明的Type为double
Exercise::Type Exercise::setVal(Type parm)
{
    val = parm + initVal(); // parm 和 initVal都是使用类内声明, 类型都为double
    return val;
}

int main(int argc, char const *argv[])
{
    Exercise ex;
    auto x = ex.setVal(10);
    cout << x << endl;
    return 0;
}