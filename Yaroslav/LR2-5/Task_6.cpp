#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double A, K, D, Y, n, m, x;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа n"<< std::endl;
std::cin >>n;
std::cout <<"Введите значение числа m"<< std::endl;
std::cin >>m;
A = fabs(n + m);
D = tan(x);
Y = (1.29 + (K / A) + (D * D));
std::cout <<Y<< std::endl;
return 0;
}

