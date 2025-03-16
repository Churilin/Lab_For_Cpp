#include "human.h"
#include <string>

class teacher : public human {
public:
    // ����������� ������ teacher
    teacher(std::string last_name, std::string name, std::string second_name,
        unsigned int work_time) : human(last_name, name, second_name) {
        this->work_time = work_time;
    }

    // ��������� ���������� ������� �����
    unsigned int get_work_time() const {
        return this->work_time;
    }

    // ��������������� ������ print_info
    void print_info() const override {
        std::cout << "�������������: " << get_full_name() << std::endl;
        std::cout << "���������� ������� �����: " << get_work_time() << std::endl;
    }

private:
    unsigned int work_time; // ������� ����
};