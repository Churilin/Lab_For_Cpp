#include "Administrator.h"
#include <iostream>

Administrator::Administrator(const std::string& lastName, const Date& birthDate, const std::string& lab)
    : Person(lastName, birthDate), lab(lab) {}

std::string Administrator::GetLab() const {
    return lab;
}

void Administrator::Show() const {
    std::cout << "Администратор:\n";
    std::cout << " Фамилия: " << name << "\n";
    std::cout << " Дата рождения: ";
    birthDate.Print();
    std::cout << "\n Лаборатория: " << lab << "\n";
    std::cout << " Стаж: " << CalculateWorkExperience() << " лет\n";
}

double Administrator::CalculateSalary() const {
    return 76000; // Фиксированная зарплата
}

int Administrator::CalculateWorkExperience() const {
    return 7; // Фиксированный стаж
}