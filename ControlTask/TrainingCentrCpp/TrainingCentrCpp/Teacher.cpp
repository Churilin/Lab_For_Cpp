#include "Teacher.h"
#include <iostream>
#include <ctime> // Для работы с текущей датой

Teacher::Teacher(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& position, int experience)
    : Person(lastName, birthDate), faculty(faculty), position(position), experience(experience) {}

std::string Teacher::GetFaculty() const {
    return faculty;
}

std::string Teacher::GetPosition() const {
    return position;
}

int Teacher::GetExperience() const {
    return experience;
}

void Teacher::Show() const {
    std::cout << "Преподаватель:\n";
    std::cout << " Фамилия: " << name << "\n";
    std::cout << " Дата рождения: ";
    birthDate.Print();
    std::cout << "\n Факультет: " << faculty << "\n";
    std::cout << " Должность: " << position << "\n";
    std::cout << " Стаж: " << CalculateWorkExperience() << " года\n";
}

double Teacher::CalculateSalary() const {
    return 110000 + 1000 * experience; // Формула расчета зарплаты
}

int Teacher::CalculateWorkExperience() const {
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

    // Возраст начала работы
    int ageAtStartOfWork = 25;

    // Расчет стажа
    if (age >= ageAtStartOfWork) {
        return (age - ageAtStartOfWork) + experience;
    }
    else {
        return 0;
    }
}