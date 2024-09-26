#include <iostream>
double sqrt(double num) {
if (num < 0) {
return -1;
}
double l = 0, r = num, mid;
double epsilon = 1e-6;
if (num < 1) r = 1;
while (r - l > epsilon) {
mid = (l + r) / 2;
if (mid * mid < num) {
l = mid; } 
else {
r = mid; }
}
return (l + r) / 2;
}
const double PI = 3.141592653589793;
double cos(double BC, double CA, double AB) {
return (((BC * BC) + (CA * CA) - (AB * AB)) / (2 * BC * CA));
}
double arccos(double x) {
if (x < -1 || x > 1) {
return -1; } 
double lev = 0;
double prav = PI;
double m;
double eps = 1e-9;
while ( prav - lev > eps){
m = (lev + prav) / 2;
double cosm = (1 - m * m / 2) + (m * m * m * m / 24);
if (cosm > x) {
lev = m;}
else {
prav = m;}
}
return (lev + prav) / 2;
}
double length(double x1, double y1, double x2, double y2) {
double dx = x2 - x1;
double dy = y2 - y1;
return sqrt(dx * dx + dy * dy);
}
double pls(double AB, double BC, double CA) {
double p = (AB + BC + CA) / 2;
return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}
double heigt(double AB, double BC, double CA) {
double p = (AB + BC + CA) / 2;
return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}
double median(double AB, double BC, double CA) {
return sqrt(2 * BC * BC + 2 * CA * CA - AB * AB);
}
double bisector(double BC, double CA, double AB) {
return sqrt(BC * CA * (BC + CA + AB) * (BC + CA - AB));
}
int main() {
setlocale (LC_ALL, "rus");
double x1, y1, x2, y2, x3, y3;
std::cout << "Введите координаты точки A (x1 y1): ";
std::cin >> x1 >> y1;
std::cout << "Введите координаты точки B (x2 y2): ";
std::cin >> x2 >> y2;
std::cout << "Введите координаты точки C (x3 y3): ";
std::cin >> x3 >> y3;
double AB = length(x1, y1, x2, y2);
double BC = length(x2, y2, x3, y3);
double CA = length(x3, y3, x1, y1);
std::cout << "Длина стороны AB: " << AB << std::endl;
std::cout << "Длина стороны BC: " << BC << std::endl;
std::cout << "Длина стороны CA: " << CA << std::endl;

double h1 = (2 / AB) * heigt(AB, BC, CA);
double h2 = (2 / BC) * heigt(AB, BC, CA);
double h3 = (2 / CA) * heigt(AB, BC, CA);
std::cout << "Высота к стороне AB: " << h1 << std::endl;
std::cout << "Высота к стороне BC: " << h2 << std::endl;
std::cout << "Высота к стороне CA: " << h3 << std::endl;

double m1 = median(AB, BC, CA) / 2;
double m2 = median(BC, AB, CA) / 2;
double m3 = median(CA, BC, AB) / 2;
std::cout << "Медиана к стороне AB: " << m1 << std::endl;
std::cout << "Медиана к стороне BC: " << m2 << std::endl;
std::cout << "Медиана к стороне CA: " << m3 << std::endl;

double b1 = bisector(AB, CA, BC) / (AB + CA);
double b2 = bisector(AB, BC, CA) / (AB + BC);
double b3 = bisector(BC, CA, AB) / (BC + CA);
std::cout << "Биссектриса к стороне AB: " << b1 << std::endl;
std::cout << "Биссектриса к стороне BC: " << b2 << std::endl;
std::cout << "Биссектриса к стороне CA: " << b3 << std::endl;
double cosA = cos(CA, AB, BC);
double cosB = cos(AB, BC, CA);
double cosC = cos(BC, CA, AB);
double uglA = arccos(cosA);
double uglB = arccos(cosB);
double uglC = arccos(cosC);
std::cout <<"Угол A в радианах: " << uglA << std::endl;
std::cout <<"Угол B в радианах: " << uglB << std::endl;
std::cout <<"Угол C в радианах: " << uglC << std::endl;
std::cout <<"Угол A в градусах: " << uglA * 180 / PI << std::endl;
std::cout <<"Угол B в градусах: " << uglB * 180 / PI << std::endl;
std::cout <<"Угол C в градусах: " << uglC * 180 / PI << std::endl;
    
double R = (AB * BC * CA) / (4 * pls(AB, BC, CA));
double r = (pls(AB, BC, CA) / ((AB + BC + CA) / 2));
std::cout <<"Радиус описаной окружности равен: " << R << std::endl;
std::cout <<"Радиус вписаной окружности равен: " << r << std::endl;

double PL1 = PI * R * R;
double PL2 = PI * r * r;
double DL1 = 2 * PI * R;
double DL2 = 2 * PI * r;
std::cout << "Площадь описаной окружности: " << PL1 << std::endl;
std::cout << "Площадь вписаной окружности: " << PL2 << std::endl;
std::cout << "Длина описаной окружности: " << DL1 << std::endl;
std::cout << "Длина вписаной окружности: " << DL2 << std::endl;
double PER = AB + BC + CA;
std::cout <<"Периметр треугольника: " << PER << std::endl;
double S1 = pls(AB, BC, CA);
double hS2 = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
double S2 = 0.5 * (hS2>0 ? hS2 : -hS2);
double S3 = (AB * BC * CA) / (4 * R);
std::cout << "Площадь треугольника по 1 формуле: " << S1 << std::endl;
std::cout << "Площадь треугольника по 2 формуле: " << S2 << std::endl;
std::cout << "Площадь треугольника по 3 формуле: " << S3 << std::endl;

return 0;

}
