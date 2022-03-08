#include "Person.h"

class Athlete:public Person {
private:
	int Height;
	int Weight;

public:
	Athlete(int number, string type);
	void PrintInfo();
	void SetHeight(int);
	void SetWeight(int); 
	int GetHeight();
	int GetWeight();
};