#include <stdlib.h> 
#include "Person.h"
#include<string>

using namespace std;


class Athlete:public Person {
private:
    int Height;
    int Weight;

public:
    Athlete(int number, string athleteType);
    Athlete();

    void PrintInfo(){
        Person::PrintInfo();
        cout << "Height: " << Height << endl;
        cout << "Weight: " << Weight << endl;
    }
    
    void SetHeight(int height);
    void SetWeight(int weight);
    void SetName(string name);
    void SetAge(int age);
    string GetName();
    int GetAge();
    int GetHeight();
    int GetWeight();
    
};
Athlete::Athlete(int number, string athleteType):Person(number,athleteType){
    //if athleteType == Swimmer
    Height = rand() % 70 + 140;
    Weight = rand() % 50 + 100;
}

Athlete::Athlete():Person() {}

string Athlete::GetName(){
    return Person::GetName();
}

int Athlete::GetAge(){
    return Person::GetAge();
}

void Athlete::SetAge(int age){
    Person::SetAge(age);
}

void Athlete::SetName(string name){
    Person::SetName(name);
}

void Athlete::SetHeight(int height){
    Height = height;
}

void Athlete::SetWeight(int weight){
    Weight = weight;
}

int Athlete::GetHeight(){
    return Height;
}

int Athlete::GetWeight(){
    return Weight;
}