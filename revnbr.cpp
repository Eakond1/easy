#include <iostream>
#include "easy.h"
using namespace std;
int itc_revnbr(int num) {
    int reversed = 0;
    int remainder;
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return reversed;
}



