#include "Student.h"
#include <iostream>

Student::Student(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& group, int courseInfo)
    : Person(lastName, birthDate), faculty(faculty), group(group), courseInfo(courseInfo) {}

std::string Student::GetFaculty() const {
    return faculty;
}

std::string Student::GetGroup() const {
    return group;
}

int Student::GetCourseInfo() const {
    return courseInfo;
}

std::string Student::GetCourseInfoInWords() const {
    return std::to_string(courseInfo) + "-�";
}

void Student::Show() const {
    std::cout << "�������:\n";
    std::cout << " �������: " << name << "\n";
    std::cout << " ���� ��������: ";
    birthDate.Print();
    std::cout << "\n ���������: " << faculty << "\n";
    std::cout << " ������: " << group << "\n";
    std::cout << " ���� ��������: " << GetCourseInfoInWords() << "\n";
}