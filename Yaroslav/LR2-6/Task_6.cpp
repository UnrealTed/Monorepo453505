#include <iostream>
#include <cmath>
int main(){
setlocale (LC_ALL, "rus");    
double A, K, D, C, S, x, y;
std::cout <<"Введите значение числа K"<< std::endl;
std::cin >>K;
std::cout <<"Введите значение числа C"<< std::endl;
std::cin >>C;
std::cout <<"Введите значение числа x"<< std::endl;
std::cin >>x;
std::cout <<"Введите значение числа y"<< std::endl;
std::cin >>y;
A = x + y;
D = fabs(C - A);
S = (10.1 + (A / C) + (D / (K * K)));
std::cout <<S<< std::endl;
return 0;
}

