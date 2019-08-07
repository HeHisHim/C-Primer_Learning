#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ex7_27
class Screen
{
    public:
        Screen() = default;
        Screen(int width, int height): width(width), height(height){}
        Screen(int width, int height, char c): width(width), height(height), content(width * height, c){}
        Screen& move(int width, int height)
        {
            cursor = (width - 1) * this->width + (height - 1);
            return *this;
        }
        Screen& set(char c)
        {
            content[cursor] = c;
            return *this;
        }
        Screen& display(ostream& os)
        {
            os << content;
            return *this;
        }
    private:
        int width = 0;
        int height = 0;
        int cursor = 0;
        string content = "";
};

int main(int argc, char const *argv[])
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    return 0;
}