#include <iostream>
#include "easy.h"

using namespace std;
int itc_sqrt(int num){
    if (num==0){
        return 0;
    }
    else if (num<0){
        return -1;
    }
    for (int i = 0; i<num; i++){
        if(num-i*i==0){
            return i;
        }
    }
    return -1;
}

