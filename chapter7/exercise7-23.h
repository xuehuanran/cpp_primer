#ifndef EXERCISE7_23_H
#define EXERCISE7_23_H

#include <string>

using std::string;

class Screen {

    public:
        typedef string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c) {
            height = ht;
            width = wd;
            contents = String(ht * wd, c);
        }
        // member functions
        char get() const {
            return contents[cursor];
        }
        char get(pos r, pos c) const {
            return contents[r * width + c];
        }
    
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;

};

#endif