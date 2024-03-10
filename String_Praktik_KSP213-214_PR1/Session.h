#pragma once
#include <string>
#include <iostream>


using namespace std;
class Session{
private:
    short ocenka;
public:
    string Name_pred;
    Session() {}
    Session(std::string name_pred, short ocenka) {
        this->Name_pred = name_pred;
        this->ocenka = ocenka;
    }
    void set_Session_console() {
        std::cout << "\nназвание предмета: "; getline(std::cin >> ws, this->Name_pred);
        std::cout << "оценка: "; std::cin >> this->ocenka;
    }
    void out_Session_console() {
        std::cout << "предмет: " << this->Name_pred << "  оценка: " << this->ocenka;
    }
    void set_ocenka(int ocenka) {
        this->ocenka = ocenka;
    }
    int get_ocenka() {
        return this->ocenka;
    }
};
