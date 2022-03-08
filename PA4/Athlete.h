#include "Person.h"

class Athlete:public Person {
private:
	int Height;
	int Weight;

public:
	Athlete(int number, string type);
	void PrintInfo();
	int GetHeight();
	int GetWeight();
	void SetHeight(int);
	void SetWeight(int); 
	
};