#include <iostream>

using namespace std; 

class Person {
private:
    string Name;
    int Age; 
    char Sex; 
public:
    Person(string name, int age, char sex);
    void PrintInfo();
};

Person::Person(string name, int age, char sex){
        Name = name;
        Age = age;
        Sex = sex;
}

void Person::PrintInfo(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Sex: " << Sex << endl;
}