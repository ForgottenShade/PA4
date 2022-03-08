#include<vector>

using namespace std;

class Team {
private:
    string TeamName;
    string Location; 
    vector<string, int> CompetitionsAndPlaces;
public:
    Team(string name, string location);
    string GetName();
};

