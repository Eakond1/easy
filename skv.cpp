#include <iostream>
#include "easy.h"
#include <cmath>
using namespace std;
int itc_skv(int num){
if (num<=0){
    return -1;
}
int S;
S=num*num;
return S;
}

int itc_spr(int a, int b){
if (a<=0 || b<=0){
    return -1;
}
int S;
S=a*b;
return S;
}
int itc_str(int a, int b, int c){
if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a ) {
    return -1;
}
double p;
double pr=a+b+c;
p=pr/2;
double S;
S= itc_sqrt(p*(p-a)*(p-b)*(p-c));

return S;
}
double itc_scir(int radius){
if(radius<=0){
    return -1;
}
double pi=3.14;
double S;
S=radius*radius*pi;
return S;
}
