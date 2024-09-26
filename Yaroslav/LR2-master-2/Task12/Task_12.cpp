#include <iostream>
double sqrt(double num) {
if (num < 0) {
return -1;
}
double l = 0, r = num, mid;
double epsilon = 1e-6;
if (num < 1) r = 1;
while (r- l > epsilon) {
mid = (l + r) / 2;
if (mid * mid < num) {
l = mid; } 
else {
r = mid; }
}
return (l + r) / 2;
}
int main(){
double a, b, c, x, t1, t2;
std::cout <<"Введите значения a, b, c соответсвенно."<< std::endl;
std::cin >> a >> b >> c;
if (a == 0 ) {
std::cout <<"a не может равняться 0"<< std::endl;
return 1;
} 
double sd = sqrt(b * b - 4 * a * c);
if (sd < 0) {
std::cout <<"Дискриминант отрицательный. Решений нет."<< std::endl;
return 1;
}
else {
t1 = (-b + sd) / (2 * a);
t2 = (-b - sd) / (2 * a);
if (t1 == t2) { 
if (t1 > 0) {
std::cout << "x1 = " << sqrt(t1) << std::endl;
std::cout << "x2 = " << -sqrt(t1) << std::endl; }
else {
std::cout <<"Нет решений."<< std::endl;  }
}
else {
if (t1 >= 0) {
std::cout <<"x1 = "<< sqrt(t1) << std::endl;
std::cout <<"x2 = "<< -sqrt(t1) << std::endl;
}
if (t2 >= 0 ) {
std::cout <<"x3 = "<< sqrt(t2) << std::endl;
std::cout <<"x4 = "<< -sqrt(t2) << std::endl;
}
}
if (t1 < 0 && t2 < 0) {
std::cout <<"Нет решений."<< std::endl;
}
return 0;
}}