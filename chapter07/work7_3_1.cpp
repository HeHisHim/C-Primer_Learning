#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ex7_23, ex7_24, ex7_25
class Screen
{
    public:
        Screen() = default;
        Screen(int width, int height): width(width), height(height){}
        Screen(int width, int height, string content): width(width), height(height), content(width * height, content){}
        void screen_print(void)
        {
            cout << width << " " << height << " " << content;
        }
    private:
        int width = 0;
        int height = 0;
        string content = "";
};

int main(int argc, char const *argv[])
{
    Screen x;
    Screen y(1, 10);
    Screen z(10, 100, "vscode");
    x.screen_print();
    return 0;
}