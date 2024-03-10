#pragma once
#include <string>
#include <iostream>

class Person {
public:
    Person() {}
    Person(std::string name, std::string sername) {
        this->name = name;
        this->sername = sername;
    }
    void set_Person_console() {
        std::cout << "���: "; std::getline(std::cin >> std::ws, this->name);
        std::cout << "�������: "; std::getline(std::cin >> std::ws, this->sername);
    }
    void get_Person_console() {
        std::cout << "\n���: " << this->name << "\n";
        std::cout << "�������: " << this->sername;
    }
protected:
    std::string name, sername;

};
