#pragma once
#include <string>
#include <iostream>

class Person {
public:
    Person() {}
    Person(std::string name, std::string  surname) {
        this->name = name;
        this->surname = surname;
    }
    void set_Person_console() {
        std::cout << "Имя: "; std::getline(std::cin >> std::ws, this->name);
        std::cout << "Фамилия: "; std::getline(std::cin >> std::ws, this-> surname);
    }
    void get_Person_console() {
        std::cout << "\nИмя: " << this->name << "\n";
        std::cout << "Фамилия: " << this-> surname;
    }
protected:
    std::string name,  surname;

};
