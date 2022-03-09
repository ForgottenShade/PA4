#include "Athlete.h"
#include "Team.h"
#include<string>

using namespace std; 

class RugbyPlayer: public Athlete {
private:
    string FieldPosition;
    Team Team; 
};