#include <iostream>
#include "easy.h"

using namespace std;
int itc_sqrt(int num){
    if (num<0){
        return -1;
    }
    else if (num==0){
        return 0;
    }
  int i = 0, x = 1;
  while (i != x){
  i = num / x;
  if (i == x){
        return x;
  }
  x++;
}
return x;
}
