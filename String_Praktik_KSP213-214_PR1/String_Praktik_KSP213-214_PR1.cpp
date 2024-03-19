// String_Praktik_KSP213-214_PR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include "Session.h"
#include "Student.h"
//enum Predmet{ Математика, Алгебра, Логика, Геометрия, Русский_язык}; не понятно как обраться к элементу перечисления
using namespace std;

vector<string> Predmeti{ "Математика", "Алгебра", "Логика", 
"Геометрия", "Русский язык", "Биология" , "Химия",
"Программирование", "История", "Физика"};

vector<string> Name{ "Кирилл", "Иаан", "МАкс",
"Стёпа", "Родион", "Растислав" , "Стас",
"Дима", "Даинил"};

vector<string> Surname{ "Математиков", "Алгебров", "Логиков",
"Геометрков", "Русскийязызыков", };

vector<string> Cod_groupe{ "КСП", "КПД", "БВТ",
"БТС", "ВТБ", };


//student.cod_group = 45 student.izm_cod_grou(5)

int main()
{
    srand(time(0));
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    setlocale(LC_ALL, "RUS");
    
    //int x = rand() % (end - start + 1) + start;
   // int ran = rand() % (10 - 1 + 1) + 1;
   // cout << ran;
   /* Session s;
    s.set_Session_console();
    s.out_Session_console();*/
    Student st("Иван","Иванов", "KSP",213,8 ), st1[10];
    st.in_kol_pred(5);
    st.auto_zap_predmet(Predmeti);

    fstream fs;
    
 
    fs.open("File.txt", ios::out );
    if (!fs.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    fs << st.out_file();

    fs.close();


    for (int i = 0; i < 10; i++)
    {
        st1[i].in_kol_pred(4);
        st1[i].auto_zap_predmet(Predmeti);
        st1[i].auto_zap_name_sername(Name, Surname);
        st1[i].auto_zap_name_groupe(Cod_groupe);
        st1[i].out_Student_console();
    }
    st.out_Student_console();
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
