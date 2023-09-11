#include <iostream>
#include "easy.h"
#include <cmath>
using namespace std;
double itc_pow(int num, int step){
    int a=1;
if (step<0){
    return -1;
}
 for (int i = 0; i < abs(step); i++){
    a=a*num;
 }
return a;
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
