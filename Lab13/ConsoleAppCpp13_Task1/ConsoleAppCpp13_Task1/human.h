#include <string>
#include <sstream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */

class human {
public:
    // ����������� ������ human
    human(std::string last_name, std::string name, std::string second_name)
        : last_name(last_name), name(name), second_name(second_name) {}

    // ����������� ����� ��� ������ ����������
    virtual void print_info() const {
        std::cout << "���: " << get_full_name() << std::endl;
    }

    // ��������� ��� ��������
    std::string get_full_name() const {
        std::ostringstream full_name;
        full_name << last_name << " " << name << " " << second_name;
        return full_name.str();
    }

    // ����������� ����������
    virtual ~human() {}

private:
    std::string name;        // ���
    std::string last_name;   // �������
    std::string second_name; // ��������
};