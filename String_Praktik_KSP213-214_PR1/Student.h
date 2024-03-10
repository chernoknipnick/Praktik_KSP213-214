#pragma once
#include <string>
#include <iostream>
#include "Person.h"
#include "Session.h"


class Student: Person {
protected:
    std::string cod_groupe;
    int number_groupe, kol_pred;
    Session* session;
    // массив из 5 элементов {};
public:
    Student() {
        this->name = "ivan";
        this->sername = "Ivanov";
        this->cod_groupe = "void";
        this->number_groupe = 0;
        this->kol_pred = 1;
        in_kol_pred(kol_pred);
    }
    Student(std::string cod_groupe, int number_groupe, int kol_pred) {
        Person("ivan", "s");
        this->cod_groupe = cod_groupe;
        this->number_groupe = number_groupe;
        in_kol_pred(kol_pred);
    }
    void in_kol_pred(int kol_pred) {
        this->kol_pred = kol_pred;
        session = new Session[kol_pred];
    }
    void in_Student() {
        this->set_Person_console();
        std::cout << "код группы: ";  std::getline(std::cin >> std::ws, this->cod_groupe);
        std::cout << "номер группы: ";  std::cin >> this->number_groupe;
    }
    void out_Student_console() {
        this->get_Person_console();
        std::cout << "\nГруппа: " << this->cod_groupe << this->number_groupe << "\n";
        for (int i = 0; i < this->kol_pred; i++)
        {
            this->session[i].out_Session_console();
            std::cout << "\n";
        }
    }
    void auto_zap(std::string A[10]) {
        for (int i = 0; i < kol_pred; i++)
        {
            int rand_pred = rand() % (10 - 1 + 1) + 1;
            int rand_ocenka = rand() % (5 - 2 + 1) + 2;
            this->session[i].Name_pred = A[rand_pred - 1];
            this->session[i].set_ocenka(rand_ocenka);
        }
    }

};