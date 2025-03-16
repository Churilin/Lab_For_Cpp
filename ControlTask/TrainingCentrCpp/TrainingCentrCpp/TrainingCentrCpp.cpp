#include <iostream>
#include <vector>
#include <memory> // Для умных указателей
#include "Person.h"
#include "Administrator.h"
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
#include <Windows.h>

int main() {

    SetConsoleOutputCP(1251);

    // Создаем вектор для хранения объектов Person
    std::vector<std::unique_ptr<Person>> people;

    // Добавляем объекты в вектор
    people.push_back(std::make_unique<Administrator>("Афанасьев", Date(1982, 3, 18), "Лаборатория 4"));
    people.push_back(std::make_unique<Student>("Синицын", Date(2003, 8, 2), "Экономический", "А504/2", 2));
    people.push_back(std::make_unique<Teacher>("Воронцов", Date(1976, 5, 22), "Кибернетический", "Доцент", 23));
    people.push_back(std::make_unique<Manager>("Павлов", Date(1989, 7, 15), "Исторический", "Старший специалист"));

    // Выводим информацию о каждом объекте
    for (const auto& person : people) {
        person->Show(); // Вызываем метод Show()

        // Проверяем, является ли объект сотрудником (реализует ли интерфейс IEmployee)
        if (auto employee = dynamic_cast<IEmployee*>(person.get())) {
            std::cout << "Заработная плата: " << employee->CalculateSalary() << std::endl;
        }

        std::cout << std::endl; // Пустая строка для разделения
    }

    return 0;
}