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
    return std::to_string(courseInfo) + "-й";
}

void Student::Show() const {
    std::cout << "Студент:\n";
    std::cout << " Фамилия: " << name << "\n";
    std::cout << " Дата рождения: ";
    birthDate.Print();
    std::cout << "\n Факультет: " << faculty << "\n";
    std::cout << " Группа: " << group << "\n";
    std::cout << " Курс обучения: " << GetCourseInfoInWords() << "\n";
}