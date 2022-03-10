#include<iostream>
#include<string>
#include<vector>
#include<tuple>
#include<cstring>

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
			cout << "7. Show Athletes" << endl;
			cout << "8. Show Coaches" << endl;
			cout << "9. Show Teams" << endl;
			cout << "--------------------" << endl;
			cout << "Type 'quit' to Exit" << endl;
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
					Team newTeam = Team(teamList.size() + 1);
					newTeam.EditTeam(athleteList, coachList);
					teamList.push_back(newTeam);
				}
				else if (atoi(userInput.c_str()) == 2) {
					Team newTeam = Team(teamList.size()+1);
					teamList.push_back(newTeam);
				}
			}
			else if (atoi(userInput.c_str()) == 4) {
				cout << "Input the number of the athlete you want to manage." << endl;
				cout << "--------------------" << endl;
				for (int i = 0; i < athleteList.size(); i++) {
					cout << i + 1 << ". " << athleteList[i].GetName() << endl;
				}
				cout << "--------------------" << endl;
				cout << "Type 'exit' to Exit" << endl;
				cout << "--------------------" << endl;
				cin >> userInput;

				if (strcmp(userInput.c_str(), "exit") != 0) {
					athleteList[atoi(userInput.c_str()) - 1].EditAthlete();
				}
			}
			else if (atoi(userInput.c_str()) == 5) {
				cout << "Input the number of the coach you want to manage." << endl;
				cout << "--------------------" << endl;
				for (int i = 0; i < coachList.size(); i++){
					cout << i+1 << ". " << coachList[i].GetName() << endl;
				}
				cout << "--------------------" << endl;
				cout << "Type 'exit' to Exit" << endl;
				cout << "--------------------" << endl;
				cin >> userInput;
				
				if (strcmp(userInput.c_str(), "exit") != 0) {
					coachList[atoi(userInput.c_str()) - 1].EditCoach();
				}
			}
			else if (atoi(userInput.c_str()) == 6) {
				cout << "Input the number of the Team you want to manage." << endl;
				cout << "--------------------" << endl;
				for (int i = 0; i < teamList.size(); i++){
					cout << i+1 << ". " << teamList[i].GetName() << endl;
				}
				cout << "--------------------" << endl;
				cout << "Type 'exit' to exit" << endl;
				cout << "--------------------" << endl;
				cin >> userInput;
				
				if (strcmp(userInput.c_str(), "exit") != 0) {
					teamList[atoi(userInput.c_str()) - 1].EditTeam(athleteList, coachList);
				}
			}
			else if (atoi(userInput.c_str()) == 7) {
				while (true) {
					cout << "Input the number of the athlete you want to see." << endl;
					cout << "--------------------" << endl;
					for (int i = 0; i < athleteList.size(); i++) {
						cout << i + 1 << ". " << athleteList[i].GetName() << endl;
					}
					cout << "--------------------" << endl;
					cout << "Type 'exit' to Exit" << endl;
					cout << "--------------------" << endl;
					cin >> userInput;

					if (strcmp(userInput.c_str(), "exit") != 0) {
						athleteList[atoi(userInput.c_str()) - 1].PrintInfo();
					}
				}
			}
			else if (atoi(userInput.c_str()) == 8) {
				while (true) {
					cout << "Input the number of the coach you want to see." << endl;
					cout << "--------------------" << endl;
					for (int i = 0; i < coachList.size(); i++) {
						cout << i + 1 << ". " << coachList[i].GetName() << endl;
					}
					cout << "--------------------" << endl;
					cout << "Type 'exit' to Exit" << endl;
					cout << "--------------------" << endl;
					cin >> userInput;

					if (strcmp(userInput.c_str(), "exit") != 0) {
						coachList[atoi(userInput.c_str()) - 1].PrintInfo();
					}
				}
			}
			else if (atoi(userInput.c_str()) == 9) {
				while (true) {
					cout << "Input the number of the team you want to see." << endl;
					cout << "--------------------" << endl;
					for (int i = 0; i < teamList.size(); i++) {
						cout << i + 1 << ". " << teamList[i].GetName() << endl;
					}
					cout << "--------------------" << endl;
					cout << "Type 'exit' to Exit" << endl;
					cout << "--------------------" << endl;
					cin >> userInput;

					if (strcmp(userInput.c_str(), "exit") != 0) {
						teamList[atoi(userInput.c_str()) - 1].PrintInfo();
					}
				}
			}
			else if (strcmp(userInput.c_str(), "quit") == 1) {
				break;
			}
		}
	}

	return 1;
}