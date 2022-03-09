#include<string>

using namespace std;

class Athlete{
private:
	int Height;
	int Weight;

public:
	Athlete(int, string);
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