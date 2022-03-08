#include <stdlib.h> 
#include "Person.h"

using namespace std;


class Athlete:public Person {
private:
    string Cat;
    int Height;
    int Weight;

public:
    Athlete(string cat) :Person() {
        Cat = cat;
        Height = rand() % 70 + 140;
        Weight = rand() % 50 + 100;
    }

    void PrintInfo(){
        Person::PrintInfo();
        cout << "Height: " << Height << endl;
        cout << "Weight: " << Weight << endl;
    }
};

int main() {
    Athlete athlete1("James", 23, 'M', 182, 78);
    athlete1.PrintInfo();
    Athlete athlete2("John", 24, 'M');
    return 0;
}