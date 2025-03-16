#pragma once
#include "Person.h"
#include "IEmployee.h"
#include <string>

class Manager : public Person, public IEmployee {
private:
    std::string faculty;
    std::string position;

public:
    Manager(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& position);
    std::string GetFaculty() const;
    std::string GetPosition() const;
    void Show() const override; // Переопределение метода Show()
    double CalculateSalary() const override; // Реализация метода из IEmployee
    int CalculateWorkExperience() const; // Метод для расчета стажа
};