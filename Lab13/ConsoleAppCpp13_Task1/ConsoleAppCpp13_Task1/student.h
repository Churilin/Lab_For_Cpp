#include "human.h"
#include <string>
#include <vector>

class student : public human {
public:
    // ����������� ������ Student
    student(std::string last_name, std::string name, std::string second_name,
        std::vector<int> scores) : human(last_name, name, second_name) {
        this->scores = scores;
    }

    // ��������� �������� ����� ��������
    float get_average_score() const {
        unsigned int count_scores = this->scores.size();
        unsigned int sum_scores = 0;
        for (unsigned int i = 0; i < count_scores; ++i) {
            sum_scores += this->scores[i];
        }
        return (float)sum_scores / (float)count_scores;
    }

    // ��������������� ������ print_info
    void print_info() const override {
        std::cout << "�������: " << get_full_name() << std::endl;
        std::cout << "������� ����: " << get_average_score() << std::endl;
    }

private:
    std::vector<int> scores; // ������ ��������
};