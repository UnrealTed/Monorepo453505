#include<iostream>
int main() {
double x, y;
std::cout<<"Введите значение х"<<std::endl;
std::cin>> x;
std::cout<<"Введите значение y"<<std::endl;
std::cin>> y;
x > y ? std::cout << x : std::cout << y;
return 0; }