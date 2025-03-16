#include "Manager.h"
#include <iostream>
#include <ctime> // Для работы с текущей датой

Manager::Manager(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& position)
    : Person(lastName, birthDate), faculty(faculty), position(position) {}

std::string Manager::GetFaculty() const {
    return faculty;
}

std::string Manager::GetPosition() const {
    return position;
}

void Manager::Show() const {
    std::cout << "Менеджер:\n";
    std::cout << " Фамилия: " << name << "\n";
    std::cout << " Дата рождения: ";
    birthDate.Print();
    std::cout << "\n Факультет: " << faculty << "\n";
    std::cout << " Должность: " << position << "\n";
}

double Manager::CalculateSalary() const {
    return 82000; // Фиксированная зарплата
}

int Manager::CalculateWorkExperience() const {
    // Получаем текущую дату
    time_t now = time(0);
    tm currentTime;
    localtime_s(&currentTime, &now); // Используем безопасную версию localtime

    // Вычисляем текущий возраст
    int currentYear = currentTime.tm_year + 1900;
    int currentMonth = currentTime.tm_mon + 1;
    int currentDay = currentTime.tm_mday;

    int age = currentYear - birthDate.GetYear();
    if (currentMonth < birthDate.GetMonth() || (currentMonth == birthDate.GetMonth() && currentDay < birthDate.GetDay())) {
        age--;
    }

    return age; // Возвращаем возраст как стаж
}