#pragma once

class IEmployee {
public:
    virtual double CalculateSalary() const = 0; // ����� ����������� �����
    virtual ~IEmployee() = default; // ����������� ����������
};