#include <iostream>
#include <iomanip>  
#include <cmath>    

int main() 
{
    system("chcp 1251");
    double perimeter;
    std::cout << "Введите периметр равностороннего треугольника: \n";
    std::cin >> perimeter;

    double side = perimeter / 3.0;

    double semiperimeter = perimeter / 2.0;

    double area = sqrt(semiperimeter * (semiperimeter - side) * (semiperimeter - side) * (semiperimeter - side));

    std::cout << "Сторона: " << side << std::endl;
    std::cout << "Площадь: " << area << std::endl;

    return 0;
}