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
    Team(string name, string location);
    string GetName();
};

