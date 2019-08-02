#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ex7_32
class Screen;
class Window_mgr
{
    public:
        using ScreenIndex = vector<Screen>::size_type;
        void clear(ScreenIndex);
        ScreenIndex add(Screen*);
    private:
        vector<Screen*>screens;
};

class Screen
{
    // friend class Window_mgr;
    friend void Window_mgr::clear(ScreenIndex);
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

void Window_mgr::clear(Window_mgr::ScreenIndex i)
{
    Screen* s = screens[i];
    s->content = string(s->width * s->height, ' ');
}

Window_mgr::ScreenIndex Window_mgr::add(Screen* scr)
{
    screens.push_back(scr);
    return screens.size() - 1;
}

int main(int argc, char const *argv[])
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;

    Window_mgr wm;
    Window_mgr::ScreenIndex index = wm.add(&myScreen);
    wm.clear(index);
    myScreen.display(cout);
    cout << endl;
    return 0;
}