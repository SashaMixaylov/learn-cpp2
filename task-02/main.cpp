#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student{
string name;
string surname;
string group;
int id;
	public:
        Student(string n,string s,string g, int id): name(n),surname(s),group(g),id(id) {};
	~Student() {};

string Name() const {return name;}
void Name(string value) {name =value;}
string Surname()const{return surname;}
void Surname(string value) {surname=value;}
string Group() const {return group;}
void Group(string value) {group=value;}
int ID() {return id;}
void ID(int value) {id =value;}
bool operator<(const Student& st) const{
return surname+name<st.surname+st.name;
}
string GetString() const {
	return "Имя:" +Name()+ "| Фамилия:" + Surname() + "| Группа:" +Group() + "| id" + ID() +"\n";
}

void Print(){
	cout<<GetString<<endl;
}
}



class StudentList{
	vector<Student> student;
	public:


void Add(const Student& ss){
	Student.push_back(ss);
}

void PrintAll()const
{ for(const auto& studen :student)
	cout<<"Имя:"<<studen.name<<",Фамилия:"<<studen.surname<<",Группа:"<<studen.group<<",ID:"<<studen.id<<endl;
}

void PrintbyName(const string& name)const{
	for(const auto& studen :student){
		if(studen.name==name){
			cout<<"Имя:"<<studen.name<<",Фамилия:"<<studen.surname<<",Группа:"<<student.group<<",ID:"<<studen.id<<endl;
		}
	}
}

void PrintbySurname(const string& surname) const{
	for(const auto& studen:student){
	   if(studen.surname==surname) {
		   cout<<"Имя:"<<studen.name<<"Фамилия:"<<studen.surname<<",Группа:"<<studen.group<<",ID:"studen.id<<endl;
	   }	
	}
}
}
