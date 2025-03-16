#pragma once
#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int day, int month, int year);
    void Print() const;

    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

};