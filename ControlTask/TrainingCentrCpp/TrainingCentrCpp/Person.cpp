#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, const Date& birthDate)
    : name(name), birthDate(birthDate) {}

void Person::Show() const {
    std::cout << "Name: " << name << ", Birth Date: ";
    birthDate.Print();
}