#include "Manager.h"
#include <iostream>
#include <ctime> // ��� ������ � ������� �����

Manager::Manager(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& position)
    : Person(lastName, birthDate), faculty(faculty), position(position) {}

std::string Manager::GetFaculty() const {
    return faculty;
}

std::string Manager::GetPosition() const {
    return position;
}

void Manager::Show() const {
    std::cout << "��������:\n";
    std::cout << " �������: " << name << "\n";
    std::cout << " ���� ��������: ";
    birthDate.Print();
    std::cout << "\n ���������: " << faculty << "\n";
    std::cout << " ���������: " << position << "\n";
}

double Manager::CalculateSalary() const {
    return 82000; // ������������� ��������
}

int Manager::CalculateWorkExperience() const {
    // �������� ������� ����
    time_t now = time(0);
    tm currentTime;
    localtime_s(&currentTime, &now); // ���������� ���������� ������ localtime

    // ��������� ������� �������
    int currentYear = currentTime.tm_year + 1900;
    int currentMonth = currentTime.tm_mon + 1;
    int currentDay = currentTime.tm_mday;

    int age = currentYear - birthDate.GetYear();
    if (currentMonth < birthDate.GetMonth() || (currentMonth == birthDate.GetMonth() && currentDay < birthDate.GetDay())) {
        age--;
    }

    return age; // ���������� ������� ��� ����
}