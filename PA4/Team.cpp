#include<iostream>
#include<vector>
#include<string>
#include<tuple>

#include"Athlete.h"
#include"Coach.h"

using namespace std;

class Team {
private:
    string TeamName;
    string Location;
    Coach TeamCoach;
    vector<Athlete> AthleteList;
    vector<tuple<string, int>> CompetitionsAndPlaces; 
public:
    Team(int number);
    Team();
    void EditTeam(vector<Athlete>, vector<Coach>);

    string GetName();
    string GetLocation();
    Coach GetCoach();
    vector<Athlete> GetAthletes();

    void SetName(string);
    void SetLocation(string);
    void SetCoach(Coach);
    void SetAthletes(vector<Athlete>);
};


Team::Team(int number){
    TeamName = "Team " + to_string(number);
    Location = "Location not set";
    TeamCoach = Coach();
}

Team::Team(){}

void Team::EditTeam(vector<Athlete> globalAthletes, vector<Coach> globalCoaches) {
    string userInput;

    while (true) {
        cout << "Edit your Team" << endl;
        cout << "--------------------" << endl;
        cout << "1. Name -- " << Team::GetName() << endl;
        cout << "2. Location -- " << Team::GetLocation() << endl;
        cout << "3. Coach -- " << Team::GetCoach().GetName() << endl;
        cout << "4. Manage Athletes" << endl;
        cout << "5. Exit Team Configuration" << endl;
        cout << "--------------------" << endl << endl;
        cin >> userInput;

        if (atoi(userInput.c_str()) == 1) {
            cout << "Enter a new name: " << endl;
            cin >> userInput;
            Team::SetName(userInput);
        }
        else if (atoi(userInput.c_str()) == 2) {
            cout << "Enter a new location: " << endl;
            cin >> userInput;
            Team::SetLocation(userInput);
        }
        else if (atoi(userInput.c_str()) == 3) {
            cout << "Select a new coach: " << endl;
            cout << "--------------------" << endl;
            for (int i = 0; i < globalCoaches.size(); i++) {
                cout << i + 1 << ". " << globalCoaches[i].GetName() << endl;
            }
            cout << "--------------------" << endl << endl;
            cin >> userInput;

            Team::SetCoach(globalCoaches[atoi(userInput.c_str()) - 1]);
        }
        else if (atoi(userInput.c_str()) == 4) {
            cout << endl;
            cout << "--------------------" << endl;
            cout << "1. Show athletes" << endl;
            cout << "2. Add athletes" << endl;
            cout << "3. Remove athletes" << endl;
            cout << "--------------------" << endl << endl;
            cin >> userInput;

            if (atoi(userInput.c_str()) == 1) {
                cout << "--------------------" << endl;
                cout << "1. Exit" << endl;
                cout << "--------------------" << endl;
                for (int i = 0; i < globalAthletes.size(); i++) {
                    cout << globalAthletes[i].GetName() << endl;
                }
                cout << "--------------------" << endl << endl;
            }
            else if (atoi(userInput.c_str()) == 2) {
                cout << "Select an athlete to add" << endl;
                cout << "--------------------" << endl;
                for (int i = 0; i < globalAthletes.size(); i++) {
                    cout << i + 1 << ". " << globalAthletes[i].GetName() << endl;
                }
                cout << "--------------------" << endl << endl;
                cin >> userInput;

                vector<Athlete> newAthleteList = Team::GetAthletes();
                newAthleteList.push_back(globalAthletes[atoi(userInput.c_str()) - 1]);
                Team::SetAthletes(newAthleteList);
            }
            else if (atoi(userInput.c_str()) == 3) {
                vector<Athlete> athleteList = Team::GetAthletes();
                bool athleteFound = false;

                cout << "Select an athlete to remove" << endl;
                cout << "--------------------" << endl;
                for (int i = 0; i < athleteList.size(); i++) {
                    cout << i + 1 << ". " << athleteList[i].GetName() << endl;
                }
                cout << "--------------------" << endl << endl;
                cin >> userInput;

                Athlete athleteToRemove = athleteList[atoi(userInput.c_str()) - 1];
                athleteList.erase(athleteList.begin() + atoi(userInput.c_str()) - 1);
            }
        }
        else if (atoi(userInput.c_str()) == 5) {
            break;
        }
    }
}


string Team::GetName(){
    return TeamName;
}

string Team::GetLocation() {
    return Location;
}

Coach Team::GetCoach() {
    return TeamCoach;
}

vector<Athlete> Team::GetAthletes() {
    return AthleteList;
}

void Team::SetName(string name) {
    TeamName = name;
}

void Team::SetLocation(string location) {
    Location = location;
}

void Team::SetCoach(Coach coach) {
    TeamCoach = coach;
}

void Team::SetAthletes(vector<Athlete> athleteList) {
    AthleteList = athleteList;
}