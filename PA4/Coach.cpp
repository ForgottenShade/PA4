#include "Person.h"

class Coach:public Person {
public:
    Coach(string name, int age, char sex):Person(name, age, sex){

    }
};