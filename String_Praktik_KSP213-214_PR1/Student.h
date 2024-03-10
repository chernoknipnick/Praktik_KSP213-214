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
    // ������ �� 5 ��������� {};
public:
    Student() : Person("ivan", "s") {
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
        std::cout << "��� ������: ";  std::getline(std::cin >> std::ws, this->cod_groupe);
        std::cout << "����� ������: ";  std::cin >> this->number_groupe;
    }
    void out_Student_console() {
        this->get_Person_console();
        std::cout << "\n������: " << this->cod_groupe << this->number_groupe << "\n";
        for (int i = 0; i < this->kol_pred; i++)
        {
            this->session[i].out_Session_console();
            std::cout << "\n";
        }
    }

    //void auto_zap(std::vector<std::string> A) {
    //    try {
    //        std::vector<std::string> b = A; // �������� �������� �� �������� ������� A
    //        if ((this->kol_pred - b.size()) == this->kol_pred)
    //            throw std::invalid_argument("Too many subjects"); // ���������� ����������, ���� ������ ������� A ������� �������
    //        else {
    //            // ��� ������� ��� ��������� �����
    //        }
    //    }
    //    catch (const std::invalid_argument& e) {
    //        // ��������� �������������� ��������
    //        std::cerr << "Error: " << e.what() << std::endl;
    //    }
    //}

    void auto_zap(std::vector<std::string> A) {
        std::vector<std::string> b = A; // �������� �������� �� �������� ������� A
        if ((this->kol_pred - b.size()) == this->kol_pred)
            exit;
        else{
             for (int i = 0; i < kol_pred; i++)
             {
                 int rand_pred = rand() % b.size();
                 int rand_ocenka = rand() % (5 - 2 + 1) + 2;
                 this->session[i].Name_pred = b[rand_pred];
                 // ������� �������������� ������� �� ������� b
                 b.erase(b.begin() + rand_pred);
                 this->session[i].set_ocenka(rand_ocenka);
             }
        }
    }
   
};