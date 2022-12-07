#include <iostream>
using namespace std;

 class Human {
public: 
    Human(string name,string surname) {
    cout <<"Parent Constructor Called!" <<endl;
    this->name = name;
    this->surname = surname;
    this->fatherName = fatherName;
}
string getName () { return name; }
string getSurname () { return surname;}
string getMiddlename () {return middlename; }
protected:
string name;
string surname;
string fathername;
};
class Student: public Human {
public:Student (string name, string surname, string fathername, string from, string gender,string nationality, int age ) : Human(name, surname) {
this->gender = gender;
this->from= from;
this->nationality=nationality;
this->age = age;
}
void print() {
cout <<"Name:" << name <<endl;
cout<<"surname:" << surname<<endl;
cout<<"fathername:"<<fathername<<endl;
cout << "Gender:" <<gender<<endl;
cout<<"From:"<<from<<endl;
cout<<"Nationality:"<<nationality<<endl;
cout << "Age:" << age <<endl;
}
    string getGender() { return gender; }
    string getFrom() { return from; }
    string getNationality() {return nationality; }
    int getAge () { return age; }
 private:
string gender;
string from;
string nationality;
int age;
};
int main() {
    Student student1 = Student ("Altanbyek", "Soltan", "Jenisbyek", "Mongolia","Kazakh","Male", 20);
student1.print ();
}