#include "Athlete.h"
#include<vector>
#include<tuple>
#include<string>
#include<iostream>


using namespace std;

class Swimmer:public Athlete {
private:
    // <Discipline, Time>
    vector<tuple<string, int>> BestTimes;
    vector<tuple<string, int>> CompetitionPlaces;
public:
    Swimmer(int number, string athleteType);
    void EditSwimmer();
    void SetName();
    tuple<string, int> GetBestTime(int i);
    void AddTime(string discipline, int time);
    void SetDiscipline(int index, string newDiscipline);
    void SetTime(int index, int newTime);
    string GetName();
};
Swimmer::Swimmer(int number, string athleteType):Athlete(number, athleteType){

}

string Swimmer::GetName(){
    return Athlete::GetName();
}

tuple<string, int> Swimmer::GetBestTime(int i) {
    return BestTimes.at(i);
}

void Swimmer::AddTime(string discipline, int time){
    tuple<string, int> payload (discipline, time);
    BestTimes.push_back(payload);
}

void Swimmer::SetDiscipline(int index, string newDiscipline) {
    tuple<string, int> temp = BestTimes.at(index);
    tuple<string, int> newItem (newDiscipline, get<1>(temp));
    BestTimes.at(index) = newItem;
}

void Swimmer::SetTime(int index, int newTime) {
    tuple<string, int> temp = BestTimes.at(index);
    BestTimes.at(index) = tuple<string, int> (get<0>(temp), newTime);
}

void Swimmer::EditSwimmer(){
    string userInput;
    while(true){
        cout << "Input the corresponding number." << endl;
        cout << "--------------------" << endl;
        cout << "1. Name -- " << Athlete::GetName() << endl;
        cout << "2. Age -- " << Athlete::GetAge() << endl;
        cout << "3. Height -- " << Athlete::GetHeight() << endl;
        cout << "4. Weight -- " << Athlete::GetWeight() << endl;
        cout << "5. Best Times" << endl; 
        cout << "6. Competition Places" << endl;
        cout << "7. Return to Main Menu" << endl;
        cout << "--------------------" << endl;

        cin >> userInput;
        if (atoi(userInput.c_str()) == 1) {
            string newName;
            cout << "Enter new name for swimmer" << endl;
            cin >> newName;
            Athlete::SetName(newName); 

            // set_name
				
		} else if (atoi(userInput.c_str()) == 2) {
            int newAge;
            cout << "Enter new age for swimmer" << endl;
            cin >> newAge;
            Athlete::SetAge(newAge); 
            
            // set_age
				
		} else if (atoi(userInput.c_str()) == 3) {
            int newHeight;
            cout << "Enter new height for swimmer" << endl;
            cin >> newHeight;
            Athlete::SetHeight(newHeight); 
            
				
		} else if (atoi(userInput.c_str()) == 4) {
			int newWeight;
            cout << "Enter new weight for swimmer" << endl;
            cin >> newWeight;
            Athlete::SetWeight(newWeight); 
            
		} else if (atoi(userInput.c_str()) == 5) {
            // display best times 
            cout << "Input the number of the action" << endl;
            cout << "--------------------" << endl;
            cout << "Discipline: Best time" << endl;
            for (int i = 0; i < BestTimes.size(); i++){
                tuple<string, int> BestTime = Swimmer::GetBestTime(i);
                cout << i+1 << ". " << get<0>(BestTime) << ": " << get<1>(BestTime) << endl;
            }
            cout << "--------------------" << endl;
            cout << "1. Add Time" << endl;
            cout << "2. Change Time" << endl;
            cout << "3. Delete Time" << endl;
            cin >> userInput;
            if (atoi(userInput.c_str()) == 1) {
                string discipline;
                int time;
                cout << "Input the dicipline: ";
                cin >> discipline;
                cout << endl;
                cout << "Input the time in seconds: ";
                cin >> time;
                cout << endl;

                Swimmer::AddTime(discipline, time);
		    } else if (atoi(userInput.c_str()) == 2) {
                int index;
                cout << "Input the number of the item that you want to change: ";
                cin >> index;
                cout << endl;
                index--;

                cout << "Input 1 to change discipline, 2 to change time: ";
                cin >> userInput;
                cout << endl;

                if (atoi(userInput.c_str()) == 1) {
                    cout << "Input name of discipline: ";
                    cin >> userInput;
                    cout << endl;

                    Swimmer::SetDiscipline(index, userInput);
                } else if (atoi(userInput.c_str()) == 1) {
                    int newTime;
                    cout << "Input time in seconds: ";
                    cin >> newTime;
                    cout << endl;

                    Swimmer::SetTime(index, newTime);
                }
		    }
            
		} else if (atoi(userInput.c_str()) == 6) {
				
		} else if (atoi(userInput.c_str()) == 7) {
            break;
		}     
    }
}