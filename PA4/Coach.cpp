#include "Person.h"
#include "Team.h"
#include<string>

using namespace std;
// Template for Date?? or just some datetime import? 

class Coach:public Person {
private: 
    string TeamName;
    // Date DateStartedWithTeam;
public:
    Coach(int number);
    Coach();

    void EditCoach();
    string GetName();
    int GetAge();
    void SetName(string);
    void SetAge(int);
};

Coach::Coach(int number):Person() {
    Person::SetName("Coach " + to_string(number));
}

Coach::Coach():Person(){}

void Coach::EditCoach() {
    string userInput;

    while (true) {
        cout << "Edit your Coach" << endl;
        cout << "--------------------" << endl;
        cout << "1. Name -- " << Coach::GetName() << endl;
        cout << "2. Age -- " << Coach::GetAge() << endl;
        cout << "3. Exit Coach Configuration" << endl;
        cout << "--------------------" << endl << endl;
        cin >> userInput;

        if (atoi(userInput.c_str()) == 1) {
            cout << "Enter a new name: " << endl;
            cin >> userInput;
            Coach::SetName(userInput);
        }
        else if (atoi(userInput.c_str()) == 2) {
            cout << "Enter a new age: " << endl;
            cin >> userInput;
            Coach::SetAge(atoi(userInput.c_str()));
        }
        else if (atoi(userInput.c_str()) == 3) {
            break;
        }
    }

}

string Coach::GetName(){
    return Person::GetName();
}

int Coach::GetAge() {
    return Person::GetAge();
}

void Coach::SetName(string name) {
    Person::SetName(name);
}

void Coach::SetAge(int age) {
    Person::SetAge(age);
}
