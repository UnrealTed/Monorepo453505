#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double A, K, C, B, Y, x, d;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа C"<< std::endl;
std::cin >>C;
std::cout <<"Введите значение числа d"<< std::endl;
std::cin >>d;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
A = log10(x);
B = (x + exp(d));
Y = ((A + B) - ((C * C) / K));
std::cout <<Y<< std::endl;
return 0;
}

