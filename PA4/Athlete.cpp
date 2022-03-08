#include "Person.h"

using namespace std;

class Athlete:public Person {
private:
    int Height;
    int Weight;
public:
    Athlete(string name, int age, char sex, int height, int weight):Person(name, age, sex){
        Height = height;
        Weight = weight; 
    }
    Athlete(string name, int age, char sex):Person(name, age, sex){
        Height = NULL;
        Weight = NULL;
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