#include <iostream>


class Critter {
public:
	void Eat();
	void Play();
	void Talk();
	void Eat(int Food = 4);
	void Play(int Fun = 4);
	void DisplayLevels();
	void ShowHungerBoredom();

	Critter(int hunger = 0, int boredom = 0);


private:
	int m_hunger;
	int m_boredom;
	int GetMood();
	void PassTime(int Time = 1);
	
};



