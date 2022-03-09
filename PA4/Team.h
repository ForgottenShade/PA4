#ifndef _TEAM_
#define _TEAM_

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
    Team(int name);
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

#endif