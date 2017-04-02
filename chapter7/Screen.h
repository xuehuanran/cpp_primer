#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Screen {

    public:
        typedef string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd) {
            height = ht;
            width = wd;
            string a_contents(ht * wd, ' ');
            contents = a_contents;
        }
        Screen(pos ht, pos wd, char c) {
            height = ht;
            width = wd;
            string a_contents(ht * wd, c);
            contents = a_contents;
        }
        // member functions
        char get() const {
            return contents[cursor];
        }
        char get(pos r, pos c) const {
            return contents[r * width + c];
        }
        Screen& set(char);
        Screen& set(pos, pos, char);
        Screen& move(pos, pos);

        Screen& display(ostream &os) {
            do_display(os);
            return *this;
        } 
        const Screen& display(ostream &os) const {
            do_display(os);
            return *this;
        }
    
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;

        void do_display(ostream &os) const {
            os << contents;
        }

};

inline Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos row, pos col, char ch) {
    contents[row * width + col] = ch;
    return *this;
} 

inline Screen& Screen::move(pos r, pos c) {
    cursor = r * width + c;
    return *this;
}

#endif