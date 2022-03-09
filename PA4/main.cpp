#include<iostream>
#include<string>
#include<vector>
#include<tuple>

#include "Swimmer.h"
#include "RugbyPlayer.h"
#include "Coach.h"


using namespace std;

int main() {
	string userInput;
	bool mainMenu = true;

	vector<Swimmer> swimmerList;
	vector<RugbyPlayer> rugbyplayerList;
	vector<Coach> coachList;
	vector<Team> teamList;
	

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
				//athlete creation happens here
				cout << "Enter the numnber for the athleteType of athlete to be created" << endl;
				cout << "--------------------" << endl;
				cout << "1. Swimmer" << endl;
				cout << "2. Rugby Player" << endl;
				cout << "--------------------" << endl;
				cin >> userInput;
				if (atoi(userInput.c_str()) == 1){
					//Swimmer shit
					// create swimmer
					// get length of Player list + 1 for name 
					int number = swimmerList.size();
					Swimmer newSwimmer = Swimmer(number + 1, "Swimmer");
					// push back
					swimmerList.push_back(newSwimmer);
				} else if (atoi(userInput.c_str()) == 2){
					// Rugby shit
					// create RugbyPlayer
					// get length of Player list + 1 for name 
					// push back
				}
			}
			else if (atoi(userInput.c_str()) == 2) {
				//coach creation happens here
				// push back
				// figure out coah name

			}
			else if (atoi(userInput.c_str()) == 3) {
				//team creation happens here
			}
			else if (atoi(userInput.c_str()) == 4) {
				// Manage athletes happens here
				cout << "Enter the numnber for the athleteType of athletes to be managed" << endl;
				cout << "--------------------" << endl;
				cout << "1. Swimmers" << endl;
				cout << "2. Rugby Players" << endl;
				cout << "--------------------" << endl;

				cin >> userInput;
				if (atoi(userInput.c_str()) == 1){
					//Swimmer shit
					// manage swimmer
					// get length of Player list + 1 for name 
					// push back
					cout << "Input the number of the swimmer you want to manage." << endl;
					cout << "--------------------" << endl;
					for (int i = 0; i < swimmerList.size(); i++){
						cout << i+1 << ". " << swimmerList[i].GetName() << endl;
					}
					cout << "--------------------" << endl;
					cin >> userInput;
					// Print info about swimmer
					// Edit swimmer[i]()

				} else if (atoi(userInput.c_str()) == 2){
					// Rugby shit
					// create RugbyPlayer
					// get length of Player list + 1 for name 
					// push back
				}

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
				cout << "Input the number of the Coach you want to manage." << endl;
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