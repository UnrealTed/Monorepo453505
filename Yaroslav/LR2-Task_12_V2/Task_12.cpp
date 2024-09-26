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
int main() {
double a, b, c, z, x1, x2, x3, x4, t1, t2, d, d2, d3;
std::cout <<"Введите значения a, b, c: " << std::endl;
std::cin >> a >> b >> c;
z = (c - (2 * a));
d = sqrt((b * b) - (4 * a * z));
if (d < 0) {
std::cout <<"Отрицательный дискриминант 1"<< std::endl;
return 1;}
else {
t1 = ((-b - d) / (2  * a));
t2 = ((-b + d) / (2  * a));}
d2 = sqrt(t1 * t1 - 4);
if (d2 < 0) {
std::cout <<"Отрицательный дискриминант 2"<< std::endl;
}
else {
x1 = ((t1 + d2) / 2);
x2 = ((t1 - d2) / 2);
std::cout << "x1: " << x1 << " x2: " << x2 << std::endl;}
d3 = sqrt((t2 * t2) - 4);

if (d3 < 0) {
std::cout <<"Отрицательный дискриминант 3"<< std::endl;
}
else {
x3 = ((t2 + d3) / 2);
x4 = ((t2 - d3) / 2);
std::cout << "x3: " << x3 << " x4 " << x4 << std::endl;
}
return 0;
}