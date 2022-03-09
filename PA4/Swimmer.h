#include"Athlete.h"
#include<tuple>
#include<vector>
#include<string>

using namespace std;
class Swimmer:public Athlete{
private:
    vector<tuple<string, int>> BestTimes;
    vector<tuple<string, int>> CompetitionPlaces;
public:
    Swimmer(int number, string athleteType);
    Swimmer();
    void EditSwimmer();
    tuple<string, int> GetBestTime(int i);
    void SetDiscipline(int index, string newDiscipline);
    void SetTime(int index, int newTime);
    void AddTime(string discipline, int time);
    string GetName();
};