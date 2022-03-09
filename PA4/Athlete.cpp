#include <stdlib.h> 
#include "Person.h"
#include<string>

using namespace std;


class Athlete:public Person {
private:
    int Height;
    int Weight;
    string AthleteType;
public:
    Athlete(int number, string athleteType);
    Athlete();
    void EditAthlete();

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
    
    //friend bool operator== (const Athlete&, const Athlete&);
};

Athlete::Athlete(int number, string athleteType):Person(){
    Height = rand() % 70 + 140;
    Weight = rand() % 50 + 100;
    AthleteType = athleteType;
    Athlete::SetName(athleteType + " " + to_string(number));
}

Athlete::Athlete():Person() {}

void Athlete::EditAthlete(){
    string userInput;

    while (true) {
        cout << "Edit your Athlete" << endl;
        cout << "--------------------" << endl;
        cout << "1. Name -- " << Athlete::GetName() << endl;
        cout << "2. Age -- " << Athlete::GetAge() << endl;
        cout << "3. Weight -- " << Athlete::GetWeight() << endl;
        cout << "4. Height -- " << Athlete::GetHeight() << endl;
        cout << "5. Exit Athlete Configuration" << endl;
        cout << "--------------------" << endl << endl;
        cin >> userInput;

        if (atoi(userInput.c_str()) == 1) {
            cout << "Enter a new name: " << endl;
            cin >> userInput;
            Athlete::SetName(userInput);
        }
        else if (atoi(userInput.c_str()) == 2) {
            cout << "Enter a new age: " << endl;
            cin >> userInput;
            Athlete::SetAge(atoi(userInput.c_str()));
        }
        else if (atoi(userInput.c_str()) == 3) {
            cout << "Enter a new weight: " << endl;
            cin >> userInput;
            Athlete::SetWeight(atoi(userInput.c_str()));
        }
        else if (atoi(userInput.c_str()) == 4) {
            cout << "Enter a new height: " << endl;
            cin >> userInput;
            Athlete::SetHeight(atoi(userInput.c_str()));
        }
        else if (atoi(userInput.c_str()) == 5) {
            break;
        }
    }

}

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

// bool operator== (const Athlete& athlete1, const Athlete& athlete2) {
//     if (athlete1.Height == athlete2.Height && athlete1.Weight == athlete2.Weight && athlete1 == athlete2) {
//         return true;
//     }
//     return false;
// }