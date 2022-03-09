#include <iostream>
#include <stdlib.h> 
#include <string>

using namespace std; 

class Person {
private:
    string Name;
    int Age; 
public:
    Person();

    void PrintInfo();
    void SetName(string name);
    void SetAge(int age);

    string GetName();
    int GetAge(); 

    //friend bool operator== (const Person&, const Person&);
};

Person::Person(){
        Name = "";
        Age = rand() % 18 + 22;
}

void Person::PrintInfo(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
}

string Person::GetName(){
    return Name;
}

int Person::GetAge(){
    return Age;
}

void Person::SetName(string name){
    Name = name;
}

void Person::SetAge(int age){
    Age = age;
}

// bool operator== (const Person& person1, const Person& person2) {
//     if (person1.Name == person2.Name && person1.Age == person2.Age) {
//         return true;
//     }
//     return false;
// }

