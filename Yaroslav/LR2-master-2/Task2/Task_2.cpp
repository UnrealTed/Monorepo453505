#include <iostream>
int main(){
setlocale (LC_ALL, "rus");    
double x, y, z;
std::cout<<"Треугольник существует только тогда, когда сумма двух его сторон больше третьей."<<std::endl;
std::cout<<"Введите значения для трёх сторон."<<std::endl;
std::cout<<"Введите значение для стороны x."<<std::endl;
std::cin>> x;
std::cout<<"Введите значение для стороны y."<<std::endl;
std::cin>> y;
std::cout<<"Введите значение для стороны z."<<std::endl;
std::cin>> z;
if (x>0 && y>0 && z>0) {}
else {
std::cout<<"Сторона не может быть отрицательной.";}
if (x < y + z && y < x + z && z < x + y) {
std::cout<<"Треугольник с такими сторонами существует."<< std::endl;}
else {
std::cout<<"Треугольник с такими сторонами не существует."<< std::endl;}
return 0;
}