// String_Praktik_KSP213-214_PR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>

using namespace std;
class Ses {
private:
    short ocenka;
public:
    string Name_pred;
    Ses() {}
    Ses(std::string name_pred, short ocenka) {
        this->Name_pred = name_pred;
        this->ocenka = ocenka;
    }
    void set_Ses_console() {
        std::cout << "название предмета: "; getline(std::cin >> ws, this->Name_pred);
        std::cout << "\nоценка: "; std::cin >> this->ocenka;
    }
    void out_Ses_console() {
        std::cout << "предмет: " << this->Name_pred << "\tоценка: " << this->ocenka;
    }
    int get_ocenka() {
        return this->ocenka;
    }
};

class Person {
public:
    Person() {}
    Person(std::string name, std::string sername) {
        this->name = name;
        this->sername = sername;
    }
    void set_Person_console()  {
        std::cout << "Имя: "; getline(std::cin >> ws, this->name);
        std::cout << "Фамилия: "; getline(std::cin >> ws, this->sername);
    }
    void get_Person_console() {
        std::cout << "Имя: " << this->name <<"\n";
        std::cout << "Фамилия: " << this->sername;
    }
protected:
    string name, sername;

};

class Student : Person {
protected:
    string cod_groupe;
    int number_groupe, kol_pred;
    Ses* s;
    // массив из 5 элементов {};
public:
    Student() {}
    Student(string cod_groupe, int number_groupe, int kol_pred) {
        this->cod_groupe = cod_groupe;
        this->number_groupe = number_groupe;
        in_kol_pred(kol_pred);
    }
    void in_kol_pred(int kol_pred) {
        this->kol_pred = kol_pred;
        s = new Ses[kol_pred];
    }
    void in_Student() {
        this->set_Person_console();
        cout << "код группы: "; getline(cin >> ws, this->cod_groupe);
        cout << "номер группы: "; cin >> this->number_groupe;
    
    }
};
//student.cod_group = 45 student.izm_cod_grou(5)

int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    setlocale(LC_ALL, "RUS");
  
    Ses s;
    s.set_Ses_console();
    s.out_Ses_console();
    Student st{"KSP",213,8}, st1[10];
    st.in_kol_pred(5);
   //string s;
    //setlocale(LC_ALL, "Rus");
    //ofstream file;
    //file.open("C:\\Users\\chier\\source\\repos\\String_Praktik_KSP213-214_PR1\\File.txt");
    //if (file.is_open()) {
    //    cout << "Все ОК! Файл открыт!\n\n" << endl;
    //    file << "Вам нужно открыть файл и записать туда данны. Используя библиотеку fstream";
    //}
    //else
    //    cout << "Файл не открыт!\n\n" << endl;
    //file.close();
    //ifstream in;
    //in.open("C:\\Users\\chier\\source\\repos\\String_Praktik_KSP213-214_PR1\\File.txt");
    //// считали первое слово из файла
    //getline(in,s); // напечатали это слово
    //cout << s << endl;
    //system("pause");
    //in.close();
    //struct Phone
    //{
   /* int count = 0, j=0, UP=0;
    string slovo, stroka;
    cout << "Vvedi simvol" << "\t";
    getline(cin, slovo);
    cout << "Vvedi stroku" << "\t";
    getline(cin, stroka);
    for (int i = 0; i < stroka.length(); i++) {
        if (true == isupper(stroka[i]))
            UP++;
        if (stroka[i] == slovo[j]) {
             j++;
             if (j == slovo.length()) {
                 count++;
                 j = 0;
             }
        }
    }
    cout << count << "\t" << UP;*/
   /* int j = 0;
    vector<int> array(100);
    for (int i : array)
    {
        array[i] = rand() % 1500 ;
        cout << ++j << "\t" << array[i] << endl;
    }
    j = 0;
    for (int i : array)
    {
        cout << ++j << "\t" << array[i] << endl;
    }*/
    return 0;
}
