#include <iostream>
#include "easy.h"

using namespace std;
int itc_sqrt(int num){
    if (num<0)
        return -1;
int c=0;

while (c*c<=num){
    if (c*c==num){
    return c;
}
    c=c+1;
}
return -1;
}
