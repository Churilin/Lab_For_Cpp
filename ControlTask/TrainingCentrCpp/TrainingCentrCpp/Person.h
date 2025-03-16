#pragma once
#include <string>
#include "Date.h"

class Person {
protected:
    std::string name;
    Date birthDate;

public:
    Person(const std::string& name, const Date& birthDate);
    virtual void Show() const; // Виртуальный метод для вывода информации
    virtual ~Person() = default; // Виртуальный деструктор
};