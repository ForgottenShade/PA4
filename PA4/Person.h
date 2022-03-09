#include <iostream>
#include<string>

using namespace std;

class Person {
private:
    string Name;
    int Age;

public:
    Person();

    void PrintInfo();
    void SetName(string);
    void SetAge(int);

    string GetName();
    int GetAge();

    friend bool operator== (const Person&, const Person&);
};

