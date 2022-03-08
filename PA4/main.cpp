#include<iostream>
#include<string>
#include<vector>

#include "Athlete.h"
using namespace std;

int main() {
	string userInput;
	bool mainMenu = true;

	vector<Athlete> athleteList;

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
				cout << "Enter the type for the athlete (ex. Swimmer, Rugby Player): " << endl;
				cin >> userInput;
			}
			else if (atoi(userInput.c_str()) == 2) {
				//coach creation happens here
			}
			else if (atoi(userInput.c_str()) == 3) {
				//team creation happens here
			}
			else if (atoi(userInput.c_str()) == 4) {

			}
			else if (atoi(userInput.c_str()) == 5) {

			}
			else if (atoi(userInput.c_str()) == 6) {

			}
		}
	}

	return 1;
}