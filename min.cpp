#include <iostream>
#include "easy.h"

using namespace std;
int itc_min(int min1,int min2){
if (min1>min2){
    return(min2);
}
else {
    return (min1);
}
}
double itc_fmin(double num, double num2){
if (num>num2){
    return(num2);
}
else {
    return (num);
}
}
