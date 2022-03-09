#ifndef _COACH_
#define _COACH_

#include<string>
#include "Person.h"

using namespace std; 

class Coach:public Person{
private:
    string TeamName;
    // Date DateStartedWithTeam;
public:
    Coach(int);
    Coach();
    
    
    void EditCoach();
    string GetName();
    int GetAge();
    void SetName(string);
    void SetAge(int);
};

#endif