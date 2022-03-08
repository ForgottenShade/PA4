#include "Person.h"
#include "Team.h"

// Template for Date?? or just some datetime import? 

class Coach:public Person {
private: 
    string TeamName;
    // Date DateStartedWithTeam;
public:
    Coach(int number, string type):Person(number, type){
    }    
};
