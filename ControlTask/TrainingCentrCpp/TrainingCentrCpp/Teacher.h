#pragma once
#include "Person.h"
#include "IEmployee.h"
#include <string>

class Teacher : public Person, public IEmployee {
private:
    std::string faculty;
    std::string position;
    int experience;

public:
    Teacher(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& position, int experience);
    std::string GetFaculty() const;
    std::string GetPosition() const;
    int GetExperience() const;
    void Show() const override; // Переопределение метода Show()
    double CalculateSalary() const override; // Реализация метода из IEmployee
    int CalculateWorkExperience() const; // Метод для расчета стажа
};