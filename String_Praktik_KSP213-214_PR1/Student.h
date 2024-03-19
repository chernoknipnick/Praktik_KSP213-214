#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include "Person.h"
#include "Session.h"


class Student: Person {
protected:
    std::string cod_groupe;
    int number_groupe, kol_pred;
    Session* session;
    // массив из 5 элементов {};
public:
    Student() : Person("ivan", "s") {
        this->cod_groupe = "void";
        this->number_groupe = 0;
        this->kol_pred = 1;
        in_kol_pred(kol_pred);
    }
    Student(std::string name, std::string  surname,std::string cod_groupe, int number_groupe, int kol_pred) : Person(name, surname) {
        Person("ivan", "s");
        this->cod_groupe = cod_groupe;
        this->number_groupe = number_groupe;
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
        std::cout << "\nГруппа: " << this->cod_groupe << "-" << this->number_groupe << "\n";
        for (int i = 0; i < this->kol_pred; i++)
        {
            this->session[i].out_Session_console();
            std::cout << "\n";
        }
    }
    string out_file() {
        return this->name + " " + this->surname;
    }
    //void auto_zap(std::vector<std::string> A) {
    //    try {
    //        std::vector<std::string> b = A; // копируем значения из входного вектора A
    //        if ((this->kol_pred - b.size()) == this->kol_pred)
    //            throw std::invalid_argument("Too many subjects"); // Генерируем исключение, если размер вектора A слишком большой
    //        else {
    //            // Ваш текущий код находится здесь
    //        }
    //    }
    //    catch (const std::invalid_argument& e) {
    //        // Обработка исключительной ситуации
    //        std::cerr << "Error: " << e.what() << std::endl;
    //    }
    //}

    void auto_zap_predmet(std::vector<std::string> Predmet) {
        std::vector<std::string> Predmet_copy = Predmet; // копируем значения из входного вектора A

        if ((this->kol_pred - Predmet_copy.size()) == this->kol_pred)
            exit;
        else{
             for (int i = 0; i < kol_pred; i++)
             {
                 int rand_pred = rand() % Predmet_copy.size();
                 int rand_ocenka = rand() % (5 - 2 + 1) + 2;
                 this->session[i].Name_pred = Predmet_copy[rand_pred];
                 // удаляем использованный элемент из вектора b
                 Predmet_copy.erase(Predmet_copy.begin() + rand_pred);
                 this->session[i].set_ocenka(rand_ocenka);
             }
        }
    }

    void auto_zap_name_sername(std::vector<std::string> name, std::vector<std::string>  surname) {
        int rand_name = rand() % name.size();
        this->name = name[rand_name];
        rand_name = rand() % surname.size();
        this->surname = surname[rand_name];
    }

    void auto_zap_name_groupe(std::vector<std::string> cod_groupe) {
        int rand_name = rand() % cod_groupe.size();
        this->cod_groupe = cod_groupe[rand_name];
        this->number_groupe = rand() % (240 - 201 + 1) + 201;
    }


  
   
};