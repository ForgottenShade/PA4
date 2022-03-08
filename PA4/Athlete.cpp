#include <stdlib.h> 
#include "Person.h"

using namespace std;


class Athlete:public Person {
private:
    int Height;
    int Weight;

public:
    Athlete(int number, string type) :Person(number, type) {}

    void PrintInfo(){
        Person::PrintInfo();
        cout << "Height: " << Height << endl;
        cout << "Weight: " << Weight << endl;
    }
    
    void SetHeight(int height);
    void SetWeight(int weight);
    int GetHeight();
    int GetWeight();
    
};
Athlete::Athlete(int number, string type):Person(number, type){
    Height = rand() % 70 + 140;
    Weight = rand() % 50 + 100;
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