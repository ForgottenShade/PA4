#include "Athlete.h"
#include "Team.h"

using namespace std;

class RugbyPlayer: public Athlete{
private:
    string FieldPosition;
    Team TeamName;
public:
    RugbyPlayer(int number, string type);
};