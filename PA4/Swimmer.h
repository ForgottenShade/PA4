#include "Athlete.h"

using namespace std;
class Swimmer: public Athlete{
private:
    vector<tuple<string, int>> BestTimes;
    vector<tuple<string, int>> CompetitionPlaces;
public:
    Swimmer(int number, string type) :Athlete(number, type){}
    void EditSwimmer();
    void SetName();
    tuple<string, int> GetBestTime(int i);
    void AddTime(string discipline, int time);
    void Swimmer::SetDiscipline(int index, string newDiscipline);
    void Swimmer::SetTime(int index, int newTime);
};