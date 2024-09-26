#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double S, A, D, b, x;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
b = x + D;
A = (D*x)/b;
S = (A*A + b*cos(x))/(D*D*D + (A + D - b));
std::cout <<S<< std::endl;
return 0;
}


