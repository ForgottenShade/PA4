#include "Person.h"
#include "Team.h"
#include<string>

using namespace std;
// Template for Date?? or just some datetime import? 

class Coach:public Person {
private: 
    string TeamName;
    // Date DateStartedWithTeam;
public:
    Coach(int number, string athleteType):Person(number, athleteType){
    }    
    string GetName();
};

string Coach::GetName(){
    return Person::GetName();
}
