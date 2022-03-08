#include <iostream>
#include <stdlib.h> 

using namespace std; 

class Person {
private:
    string Name;
    int Age; 
public:
    Person();
    void PrintInfo();
};

Person::Person(){
        Name = "";
        Age = rand;
}

void Person::PrintInfo(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
}