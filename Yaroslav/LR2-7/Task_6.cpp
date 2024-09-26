#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double A, K, D, C, B, Y, x, p, h;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа C"<< std::endl;
std::cin >>C;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа p"<< std::endl;
std::cin >>p;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа h"<< std::endl;
std::cin >>h;
A = x - p;
B = log(h);
Y = ((0.78 * B) + ((A * A * A) / (K * C * D)));
std::cout <<Y<< std::endl;
return 0;
}

