#include "Athlete.h"
#include "Team.h"

using namespace std; 

class Coach: public Athlete{
private:
    string TeamName;
    // Date DateStartedWithTeam;
public:
    Coach(int number, string type) : Athlete(number, type){}
};