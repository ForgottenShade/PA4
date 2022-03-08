#include "Person.h"

class Athlete:public Person {
private:
	int Height;
	int Weight;

public:
	Athlete(string name);
	void PrintInfo();
};