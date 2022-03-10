#include <stdlib.h> 
#include "Person.h"
#include<string>
#include<vector>
#include<tuple>

using namespace std;


class Athlete:public Person {
private:
    int Height;
    int Weight;
    string AthleteType;
    vector<tuple<string, string>> Stats;
public:
    Athlete(int number, string athleteType);
    Athlete();
    void EditAthlete();
    void PrintInfo();

    void SetHeight(int height);
    void SetWeight(int weight);
    void SetName(string name);
    void SetAge(int age);
    void SetStats(vector<tuple<string, string>>);

    string GetName();
    int GetAge();
    int GetHeight();
    int GetWeight();
    vector<tuple<string, string>> GetStats();
    
    //friend bool operator== (const Athlete&, const Athlete&);
};

Athlete::Athlete(int number, string athleteType):Person(){
    Height = rand() % 70 + 140;
    Weight = rand() % 50 + 100;
    AthleteType = athleteType;
    Athlete::SetName(athleteType + " " + to_string(number));
    Athlete::SetStats(vector<tuple<string, string>>());
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
        cout << "5. Manage Stats" << endl;
        cout << "--------------------" << endl;
        cout << "Type 'exit' to Exit" << endl;
        cout << "--------------------" << endl;
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
            while (true){
                vector<tuple<string, string>> currentStats = Athlete::GetStats();
                cout << "Manage Stats" << endl;
                cout << "--------------------" << endl;
                cout << "1. View Stats" << endl;
                cout << "2. Add Stat" << endl;
                cout << "3. Remove Stat" << endl;
                cout << "--------------------" << endl;
                cout << "Type 'exit' to Exit" << endl;
                cout << "--------------------" << endl;
                cin >> userInput;

                if (atoi(userInput.c_str()) == 1) {
                    cout << "View Stats" << endl;
                    cout << "--------------------" << endl;
                    for (int i = 0; i < currentStats.size(); i++) {
                        cout << i + 1 << ". " << get<0>(currentStats[i]) << " : " << get<1>(currentStats[i]) << endl;
                    }
                    cout << "--------------------" << endl;
                    cout << "Type 'exit' to Exit" << endl;
                    cout << "--------------------" << endl;
                    cin >> userInput;
                }
                else if (atoi(userInput.c_str()) == 2) {
                    string first;
                    string second;
                    cout << "Enter the name of the stat: " << endl;
                    cin >> userInput;
                    first = userInput;
                    cout << endl << "Enter the value for the stat: " << endl;
                    cin >> userInput;
                    second = userInput;

                    tuple<string, string> newStat = { first, second };
                    currentStats.push_back(newStat);
                    Athlete::SetStats(currentStats);
                }
                else if (atoi(userInput.c_str()) == 3) {
                    cout << "Select a stat to remove" << endl;
                    cout << "--------------------" << endl;
                    for (int i = 0; i < currentStats.size(); i++) {
                        cout << i + 1 << ". " << get<0>(currentStats[i]) << " : " << get<1>(currentStats[i]) << endl;
                    }
                    cout << "--------------------" << endl;
                    cout << "Type 'exit' to Exit" << endl;
                    cout << "--------------------" << endl;
                    cin >> userInput;

                    if (strcmp(userInput.c_str(), "exit") != 0) {
                        currentStats.erase(currentStats.begin() + atoi(userInput.c_str()) - 1);
                        Athlete::SetStats(currentStats);
                    }
                }
            }
        }
        else if (strcmp(userInput.c_str(), "exit") == 1) {
            break;
        }
    }

}

void Athlete::PrintInfo() {
    string userInput;
    vector<tuple<string, string>> stats = Athlete::GetStats();
    cout << "--------------------" << endl;
    cout << "Name: " << Athlete::GetName() << endl;
    cout << "Age: " << Athlete::GetAge() << endl;
    cout << "Weight: " << Athlete::GetWeight() << endl;
    cout << "Height: " << Athlete::GetHeight() << endl;
    cout << "Stats: " << endl;
    for (int i = 0; i < stats.size(); i++) {
        cout << "\t" << get<0>(stats[i]) << ": " << get<1>(stats[i]) << endl;
    }
    cout << "--------------------" << endl;
    cout << "Type 'exit' to Exit" << endl;
    cout << "--------------------" << endl;

    cin >> userInput;
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

void Athlete::SetStats(vector<tuple<string, string>> stats) {
    Stats = stats;
}

int Athlete::GetHeight(){
    return Height;
}

int Athlete::GetWeight(){
    return Weight;
}

vector<tuple<string, string>> Athlete::GetStats() {
    return Stats;
}

// bool operator== (const Athlete& athlete1, const Athlete& athlete2) {
//     if (athlete1.Height == athlete2.Height && athlete1.Weight == athlete2.Weight && athlete1 == athlete2) {
//         return true;
//     }
//     return false;
// }