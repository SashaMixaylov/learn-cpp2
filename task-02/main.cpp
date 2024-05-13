#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<sstream>
using namespace std;

const string surname [] = {"Соколов","Минин","Веселов","Токарев","Вихарев"};
const string name [] = {"Сергей","Алексей","Иван","Артемий","Илья"};
const string group [] ={"667","214","789","467","345"};

class Student{
    string name;
    string surname;
    string group;
    int id;
public:
    Student(string n, string s, string g, int id): name(n), surname(s), group(g), id(id) {};
    ~Student() {};

    string Name() const {return name;}
    void Name(string value) {name = value;}
    string Surname() const {return surname;}
    void Surname(string value) {surname = value;}
    string Group() const {return group;}
    void Group(string value) {group = value;}
    int ID() const {return id;}
    void ID(int value) {id = value;}

    friend ostream& operator<<(ostream& os, Student& st){
        os << st.GetString();
        return os;
    }
    string GetString() const {
        return "Имя:" + Name() + " | Фамилия:" + Surname() + " | Группа:" + Group() + " | id:" + to_string(ID()) + "\n";
    }

};

class StudentList{
    vector<Student> students;
public:
    void Add(const Student& ss){
        students.push_back(ss);
    }

    void PrintAll() const {
        for(const auto& student : students)
            cout << "Имя:" << student.Name() << ", Фамилия:" << student.Surname() << ", Группа:" << student.Group() << ", ID:" << student.ID() << endl;
    }

    void PrintbyName(const string& name) const {
        for(const auto& student : students) {
            if(student.Name() == name) {
                cout << "Имя:" << student.Name() << ", Фамилия:" << student.Surname() << ", Группа:" << student.Group() << ", ID:" << student.ID() << endl;
            }
        }
    }

    void PrintbySurname(const string& surname) const {
        for(const auto& student : students) {
            if(student.Surname() == surname) {
                cout << "Имя:" << student.Name() << ", Фамилия:" << student.Surname() << ", Группа:" << student.Group() << ", ID:" << student.ID() << endl;
            }
        }
    }
};

int main(){
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    StudentList studList;
    for(int i = 0; i <= 200; ++i){
        int nameIndex = rand() % 5;
        int surnameIndex = rand() % 5;
        int groupIndex = rand() % 5;
        int idIndex = rand() % 110;

        studList.Add(Student(name[nameIndex], surname[surnameIndex], group[groupIndex], idIndex));
    }

    cout << "Список студента:" << endl;
    studList.PrintAll();
    cout << "Поиск по имени:" << endl;
    studList.PrintbyName("Сергей");
    cout << "Поиск по фамилии:" << endl;
    studList.PrintbySurname("Соколов");
}
