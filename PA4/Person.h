#include <iostream>
#include<string>

using namespace std;

class Person {
private:
    string Name;
    int Age;

public:
    Person(int number, string type);
    void PrintInfo();
    void SetName(string);
    void SetAge(int);
    string GetName();
    int GetAge();
};

