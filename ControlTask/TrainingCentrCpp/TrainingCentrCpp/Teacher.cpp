#include "Teacher.h"
#include <iostream>
#include <ctime> // ��� ������ � ������� �����

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
    std::cout << "�������������:\n";
    std::cout << " �������: " << name << "\n";
    std::cout << " ���� ��������: ";
    birthDate.Print();
    std::cout << "\n ���������: " << faculty << "\n";
    std::cout << " ���������: " << position << "\n";
    std::cout << " ����: " << CalculateWorkExperience() << " ����\n";
}

double Teacher::CalculateSalary() const {
    return 110000 + 1000 * experience; // ������� ������� ��������
}

int Teacher::CalculateWorkExperience() const {
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

    // ������� ������ ������
    int ageAtStartOfWork = 25;

    // ������ �����
    if (age >= ageAtStartOfWork) {
        return (age - ageAtStartOfWork) + experience;
    }
    else {
        return 0;
    }
}