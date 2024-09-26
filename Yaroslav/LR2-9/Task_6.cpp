#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double A, K, C, D, B, Y, x, p, z;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа C"<< std::endl;
std::cin >>C;
std::cout <<"Введите значение числа D"<< std::endl;
std::cin >>D;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа p"<< std::endl;
std::cin >>p;
std::cout <<"Введите значение числа z"<< std::endl;
std::cin >>z;
A = (sin(x) - z);
B = fabs(p - x);
Y = (((A + B) * (A + B)) - (K / (C * D)));
std::cout <<Y<< std::endl;
return 0;
}

