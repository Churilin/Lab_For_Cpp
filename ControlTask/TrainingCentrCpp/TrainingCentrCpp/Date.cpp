#include "Date.h"
#include <iostream>

Date::Date(int day, int month, int year)
    : day(day), month(month), year(year) {}

int Date::GetYear() const {
    return year;
}

int Date::GetMonth() const {
    return month;
}

int Date::GetDay() const {
    return day;
}

void Date::Print() const {
    std::cout << day << "/" << month << "/" << year;

}