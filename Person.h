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