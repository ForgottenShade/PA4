#include<iostream>
#include<string>
#include<vector>
#include<tuple>

#include"Athlete.h"
#include"Coach.h"
#include"Team.h"

using namespace std;

vector<Athlete> athleteList;
vector<Coach> coachList;
vector<Team> teamList;

int GetAthleteNumber(string athleteType) {
	int count= 0;
	for (int i = 0; i < athleteList.size(); i++) {
		if (strcmp(athleteList[i].GetName().c_str(), athleteType.c_str()) == 1) {
			count++;
		}
	}
	return count;
}

int main() {
	string userInput;
	bool mainMenu = true;
	

	while (true) {
		if (mainMenu) {
			cout << "Input the corresponding number." << endl;
			cout << "--------------------" << endl;
			cout << "1. Create Athlete" << endl;
			cout << "2. Create Coach" << endl;
			cout << "3. Create Team" << endl;
			cout << "4. Manage Athletes" << endl;
			cout << "5. Manage Coaches" << endl;
			cout << "6. Manage Teams" << endl;
			cout << "--------------------" << endl;
		}

		cin >> userInput;
		cout << endl;

		if (mainMenu) {
			if (atoi(userInput.c_str()) == 1) {
				cout << "How would you like to create the athlete?" << endl;
				cout << "--------------------" << endl;
				cout << "1. Manual" << endl;
				cout << "2. Automatic" << endl;
				cout << "--------------------" << endl;

				cin >> userInput;
				if (atoi(userInput.c_str()) == 1) {
					cout << "Enter a type for the athlete (ex. Swimmer, Rugby Player): " << endl;
					cin >> userInput;

					int number = GetAthleteNumber(userInput) + 1;
					Athlete newAthlete = Athlete(number, userInput);
					newAthlete.EditAthlete();
					//athleteList.resize(athleteList.size() + 1);
					athleteList.push_back(newAthlete);
				}
				else if (atoi(userInput.c_str()) == 2) {
					cout << "Enter a type for the athlete (ex. Swimmer, Rugby Player): " << endl;
					cin >> userInput;

					int number = GetAthleteNumber(userInput) + 1;
					Athlete newAthlete = Athlete(number, userInput);
					//athleteList.resize(athleteList.size() + 1);
					athleteList.push_back(newAthlete);
				}
			}
			else if (atoi(userInput.c_str()) == 2) {
				cout << "How would you like to create the coach?" << endl;
				cout << "--------------------" << endl;
				cout << "1. Manual" << endl;
				cout << "2. Automatic" << endl;
				cout << "--------------------" << endl;

				cin >> userInput;
				if (atoi(userInput.c_str()) == 1) {
					Coach newCoach = Coach(coachList.size() + 1);
					newCoach.EditCoach();
					coachList.push_back(newCoach);
				}
				else if (atoi(userInput.c_str()) == 2) {
					Coach newCoach = Coach(coachList.size() + 1);
					coachList.push_back(newCoach);
				}
			}
			else if (atoi(userInput.c_str()) == 3) {
				cout << "How would you like to create the team?" << endl;
				cout << "--------------------" << endl;
				cout << "1. Manual" << endl;
				cout << "2. Automatic" << endl;
				cout << "--------------------" << endl;

				cin >> userInput;
				if (atoi(userInput.c_str()) == 1) {
					cout << "Enter a type for the athlete (ex. Swimmer, Rugby Player): " << endl;
					cin >> userInput;

					int number = GetAthleteNumber(userInput) + 1;
					Athlete newAthlete = Athlete(number, userInput);
					newAthlete.EditAthlete();
					//athleteList.resize(athleteList.size() + 1);
					athleteList.push_back(newAthlete);
				}
				else if (atoi(userInput.c_str()) == 2) {
					cout << "Enter a type for the athlete (ex. Swimmer, Rugby Player): " << endl;
					cin >> userInput;

					int number = GetAthleteNumber(userInput) + 1;
					Athlete newAthlete = Athlete(number, userInput);
					//athleteList.resize(athleteList.size() + 1);
					athleteList.push_back(newAthlete);
				}
			}
			else if (atoi(userInput.c_str()) == 4) {
				cout << "Input the number of the swimmer you want to manage." << endl;
				cout << "--------------------" << endl;
				for (int i = 0; i < athleteList.size(); i++) {
					cout << i + 1 << ". " << athleteList[i].GetName() << endl;
				}
				cout << "--------------------" << endl;
				cin >> userInput;
			}
			else if (atoi(userInput.c_str()) == 5) {
				//Coach shit
				// manage swimmer
				// get length of Player list + 1 for name 
				// push back
				cout << "Input the number of the Coach you want to manage." << endl;
				cout << "--------------------" << endl;
				for (int i = 0; i < coachList.size(); i++){
					cout << i+1 << ". " << coachList[i].GetName() << endl;
				}
				cout << "--------------------" << endl;
				cin >> userInput;
				// Print info about swimmer
				// Edit swimmer[i]()

			}
			else if (atoi(userInput.c_str()) == 6) {
				//Teams shit
				// manage swimmer
				// get length of Player list + 1 for name 
				// push back
				cout << "Input the number of the Team you want to manage." << endl;
				cout << "--------------------" << endl;
				for (int i = 0; i < teamList.size(); i++){
					cout << i+1 << ". " << teamList[i].GetName() << endl;
				}
				cout << "--------------------" << endl;
				cin >> userInput;
				// Print info about swimmer
				// Edit swimmer[i]()
			}
		}
	}

	return 1;
}