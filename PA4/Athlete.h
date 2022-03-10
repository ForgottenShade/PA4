#ifndef _ATHLETE_
#define _ATHLETE_

#include<string>
#include<tuple>
#include<vector>
#include<cstring>
#include"Person.h"

using namespace std;

class Athlete:public Person{
private:
	int Height;
	int Weight;
	vector<string> Stats;
public:
	Athlete(int, string);
	Athlete();
	void EditAthlete();

	void PrintInfo();
	int GetHeight();
	int GetWeight();
	string GetName();
	int GetAge();
	vector<string> GetStats();


	void SetName(string);
	void SetAge(int);
	void SetHeight(int);
	void SetWeight(int); 
	void SetStats(vector<string>);

	//friend bool operator== (const Athlete&, const Athlete&);
};

#endif