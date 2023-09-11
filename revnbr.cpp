#include <iostream>
#include "easy.h"
using namespace std;
int itc_revnbr(int num) {
     if (num < 100 || num > 999) {
         return -1;
     }
         int reversedNum = 0;
         while (num > 0) {
          int digit = num % 10;
         reversedNum = reversedNum * 10 + digit;
         num /= 10;
         }
          return reversedNum;
         }


