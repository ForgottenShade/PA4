#include "Person.h"

#include<string>
#include<cstring>

using namespace std;
// Template for Date?? or just some datetime import? 

class Coach:public Person {
private: 
    string TeamName;
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
    Coach::SetName("Coach " + to_string(number));
}

Coach::Coach():Person() {}

void Coach::EditCoach() {
    string userInput;

    while (true) {
        cout << "Edit your Coach" << endl;
        cout << "--------------------" << endl;
        cout << "1. Name -- " << Coach::GetName() << endl;
        cout << "2. Age -- " << Coach::GetAge() << endl;
        cout << "--------------------" << endl;
        cout << "Type 'exit' to Exit" << endl;
        cout << "--------------------" << endl;
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
        else if (strcmp(userInput.c_str(), "exit") == 0) {
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
