#include<string>

using namespace std; 

class Coach{
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