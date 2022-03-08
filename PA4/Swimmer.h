#include "Athlete.h"

using namespace std;
class Swimmer: public Athlete{
private:
    vector<tuple<string, int>> BestTimes;
    vector<tuple<string, int>> CompetitionPlaces;
public:
    Swimmer(int number, string type);
    void EditSwimmer();
    tuple<string, int> GetBestTime(int i);
    void Swimmer::SetDiscipline(int index, string newDiscipline);
    void Swimmer::SetTime(int index, int newTime);
    void AddTime(string discipline, int time);
};