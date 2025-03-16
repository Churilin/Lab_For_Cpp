#pragma once
#include "Person.h"
#include <string>

class Student : public Person {
private:
    std::string faculty;
    std::string group;
    int courseInfo;

public:
    Student(const std::string& lastName, const Date& birthDate, const std::string& faculty, const std::string& group, int courseInfo);
    std::string GetFaculty() const;
    std::string GetGroup() const;
    int GetCourseInfo() const;
    std::string GetCourseInfoInWords() const;
    void Show() const override; // Переопределение метода Show()
};