#include <iostream>
#include "easy.h"
#include <cmath>
using namespace std;
double itc_pow(int num, int step){
    double a = num;
    if (step==0){
    return 1;
    }
    else if (step>0){
        for (int i=1; i < step; i++){
        a=a*num;
        }
    return a;
    }

    if (step==0){
    return 0;
    }
    else {
        for(int i=-1; i>step; i--){
        a=a*num;
        }
        return 1/a;
    }
}
 bool itc_ispositive(int num){
     if (num>=0){
         return true;
     }
     else
         return false;

 }
 bool itc_ispositive_d(double num){
  if (num>=0){
         return true;
     }
     else
         return false;


 }
