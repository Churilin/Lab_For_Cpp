#include "Administrator.h"
#include <iostream>

Administrator::Administrator(const std::string& lastName, const Date& birthDate, const std::string& lab)
    : Person(lastName, birthDate), lab(lab) {}

std::string Administrator::GetLab() const {
    return lab;
}

void Administrator::Show() const {
    std::cout << "�������������:\n";
    std::cout << " �������: " << name << "\n";
    std::cout << " ���� ��������: ";
    birthDate.Print();
    std::cout << "\n �����������: " << lab << "\n";
    std::cout << " ����: " << CalculateWorkExperience() << " ���\n";
}

double Administrator::CalculateSalary() const {
    return 76000; // ������������� ��������
}

int Administrator::CalculateWorkExperience() const {
    return 7; // ������������� ����
}