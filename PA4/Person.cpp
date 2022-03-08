#include <iostream>
#include <stdlib.h> 
#include <string>

using namespace std; 

class Person {
private:
    string Name;
    int Age; 
public:
    Person(int number, string type);
    void PrintInfo();
    void SetName(string name);
    void SetAge(int age);
    string GetName();
    int GetAge(); 
};

Person::Person(int number, string type){
        Name = type + " " + to_string(number);
        Age = rand() % 18 + 22;
}

void Person::PrintInfo(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
}

void Person::SetName(string name){
    Name = name;
}

void Person::SetAge(int age){
    Age = age;
}

string Person::GetName(){
    return Name;
}

int Person::GetAge(){
    return Age;
}
