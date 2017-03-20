#include <iostream>
#include "Chapter6.h"

int fact(int val) {
    if (val == 1 || val == 0) {
        return 1;
    } else {
        return val * fact(val - 1);
    }
}
