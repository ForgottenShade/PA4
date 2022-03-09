#include<string>
#include"Person.h"
using namespace std;

class Athlete:public Person{
private:
	int Height;
	int Weight;

public:
	Athlete(int, string);
	Athlete();
	void PrintInfo();
	int GetHeight();
	int GetWeight();
	string GetName();
	int GetAge();
	void SetName(string);
	void SetAge(int);
	void SetHeight(int);
	void SetWeight(int); 
	
};