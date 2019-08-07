#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ex7_43
class NoDefault
{
    public:
        NoDefault(int no): no(no){}
        void getNo()
        {
            cout << no << endl;
        }
    private:
        int no;
};
class C
{
    public:
        C(): no(NoDefault(0)){}
        C(int no): no(NoDefault(no)){}
        void getNo()
        {
            no.getNo();
        }
    private:
        NoDefault no;
};

// ex7_44
/*
    vector<NoDefault> vec(10); 不合法
    NoDefault类不能被正确初始化
 */

// ex7_45
/*
    vector<C> vec(10); 合法
    C类能被正确初始化
 */

int main(int argc, char const *argv[])
{
    // NoDefault no(10);
    // no.getNo();
    // C c(100);
    // c.getNo();
    vector<C> vec(10);
    return 0;
}