#include <iostream>
double sqrt(double num) {
if (num < 0) {
return -1;
}
double l = 0, p = num, mid;
double epsilon = 1e-6;
if (num < 1) p = 1;
while (p- l > epsilon) {
mid = (l + p) / 2;
if (mid * mid < num) {
l = mid; } 
else {
p = mid; }
}
return (l + p) / 2;
}
double mod(double n) {
return (n < 0) ? -n : n;    
}
int main(){
setlocale (LC_ALL, "rus");
double x1, y1, x2, y2, r, R, d;
std::cout <<"Эта программа для вычисления попадает ли круг M1 попадает в круг M2."<< std::endl;
std::cout <<"Введите координаты центральной точки круга M1. x1 и y1 соответсвенно."<< std::endl;
std::cin >> x1 >> y1;
std::cout <<"Введите координаты центральной точки круга M2. x2 и y2 соответсвенно."<< std::endl;
std::cin >> x2 >> y2;
std::cout <<"Введите значение радиуса для круга M1."<< std::endl;
std::cin >> r;
std::cout <<"Введите значение радиуса для круга M2."<< std::endl;
std::cin >> R;
d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
if (d + r <= R) {
std::cout <<"Да."<< std::endl;
}
else if (d + R <= r) {
std::cout <<"Да, но справедливо обратное для двух фигур."<< std::endl;    
}
else if (d < r + R && d > mod(r - R)) {
std::cout <<"Фигуры пересекаются."<< std::endl; 
}
else {
std::cout <<"Ни одно условие не выполнено."<< std::endl;
}
return 0;
}