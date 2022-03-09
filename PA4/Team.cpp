#include<iostream>
#include<vector>
#include<string>
#include<tuple>

using namespace std;

class Team {
private:
    string TeamName;
    string Location; 
    vector<tuple<string, int>> CompetitionsAndPlaces; 
public:
    Team(int number);
    string GetName();
};


Team::Team(int number){
    TeamName = "Team " + to_string(number);
    Location = "Location not set";
}

string Team::GetName(){
    return TeamName;
}