#pragma once

class IEmployee {
public:
    virtual double CalculateSalary() const = 0; // Чисто виртуальный метод
    virtual ~IEmployee() = default; // Виртуальный деструктор
};