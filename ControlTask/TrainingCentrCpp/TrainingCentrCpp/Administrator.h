#pragma once
#include "Person.h"
#include "IEmployee.h"

class Administrator : public Person, public IEmployee {
private:
    std::string lab;

public:
    Administrator(const std::string& lastName, const Date& birthDate, const std::string& lab);
    std::string GetLab() const;
    void Show() const override; // ��������������� ������ Show()
    double CalculateSalary() const override; // ���������� ������ �� IEmployee
    int CalculateWorkExperience() const; // ����� ��� ������� �����
};