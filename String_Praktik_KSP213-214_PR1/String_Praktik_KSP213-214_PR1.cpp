// String_Praktik_KSP213-214_PR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
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
    void set_Ses() {
        cout << "название предмета: "; getline(cin >> ws, this->Name_pred);
        cout << "оценка: "; cin >> this->ocenka;
    }
    void out_Ses() {
        cout << "предмет: " << this->Name_pred << "\tоценка: " << this->ocenka;
    }

};
class Person
{
public:
    Person() {};
    ~Person();

protected:
    string Name, Sername;

};



class Student : Person{
protected:
    string cod_groupe;
    int number_groupe , kol_pred =0;
    Ses* ses = new Ses[kol_pred];// массив из 5 элементов {};
};
//student.cod_group = 45 student.izm_cod_grou(5)
void in_Student(Student &s) {
    cout << "\nИмя студента: "; getline(cin >> ws, s.Name);
    cout << "код группы: "; getline(cin >> ws, s.cod_groupe);
    cout << "номер группы: "; cin >> s.number_groupe;
    for (int i = 0; i < 5; i++)
    {
        s.ses[i].set_Ses();
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
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
    Ses s;
    s.set_Ses();
    Student st, st1[10];
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
    for (int i = 0; i < 3; i++) in_Student(st1[i]);
    in_Student(st);

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
