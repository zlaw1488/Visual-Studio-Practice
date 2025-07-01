#include <iostream>
#include "HeaderC.h"


using namespace std;

int Critter::GetHunger() {
	

	return m_hunger;
	
}
void Critter::Greet() {
	cout << "Hello! I am a Critter!" << " FEED ME!" << endl;
}

int Critter::s_Total = 0;

int Critter::CriTotal() {
	return s_Total;
}

int Critter::GetMood() {
	return m_hunger + m_boredom;
}
void Critter::Talk() {
	cout << "I am a Critter, and I feel " << endl;

	int Mood = GetMood();

	if (Mood < 6 && Mood < 15) {
		cout << "Pretty Good." << endl;
	}
	else if (Mood > 15) {
		cout << "ANGRY!" << endl;
	}
	else {
		cout << "OKAY.";

	}
}

void Critter::PassTime(int Time) {
	m_boredom += Time;
	m_hunger += Time;
}

void Critter::Play(int fun) {
	cout << "WWHHhheeeeee!" << endl;

	m_boredom -= fun;

	if (m_boredom < 0) {
		m_boredom = 0;
	}
	PassTime();
}


void Critter::Eat(int food) {
	cout << "BRrrrrruuoooop" << endl;

	m_hunger -= food;

	if (m_hunger < 0) {
		m_hunger = 0;
	}
	
}

void Critter::GetHungerBoredom() {
	if (m_hunger < 5 && m_boredom < 5) {
		cout << "I'm not Hungry, and I'm not Bored." << endl;
	}
	else if (m_hunger > 5 && m_boredom < 10) {
		cout << "I'm pretty hungry, and I'm pretty bored." << endl;

	}
	else if (m_hunger > 10 && m_boredom > 10) {
		cout << "I'm STARVING, and I'm VERY BORED!" << endl;
	}
}

void Critter::DisplayLevels() {
	cout << "Hunger Level: " << m_hunger << endl;
	cout << "Boredom Level: " << m_boredom << endl;
}
Critter::Critter(int hunger, int boredom) {
	m_hunger = hunger;
	m_boredom = boredom;

	cout << "A New Critter has been Born!" << endl;
	cout << "Hunger Level: " << m_hunger << "\n" << "Boredom Level: " << m_boredom << endl;

	++s_Total;
}

int main() {
	Critter crit(2,1);
	Critter crit2;
	Critter crit3;

	//cout << "My New Hunger Level is:\n" << endl;
	//cout << crit.GetHunger() << endl;

	cout << "Critter Caretaker:\n" << endl;

	int choice = 1;

	cout << "0: " << "Exit Program." << endl;
	cout << "1: " << "Feed Your Critter." << endl;
	cout << "2: " << "Play with Your Critter." << endl;
	cout << "3: " << "Talk to Your Critter." << endl;
	cout << "4: " << "Get Critter's Hunger & Boredom Levels." << endl;

	while (choice != 0) {
	cout << "Enter Choice: " << endl;
	cin >> choice;

	
		switch (choice)
		{
		case 0:
			cout << "Goodbye!\n" << endl;
			break;
		case 1:
			crit.Eat(4);
			break;
		case 2:
			crit.Play(3);
			break;
		case 3:
			crit.Talk();
			break;
		case 4:
			crit.DisplayLevels();
			break;

		default:
			cout << "Sorry, " << choice << " is not a Valid Choice!" << endl;

			break;
		}

	}
	//cout << Critter::CriTotal() << endl;



	system("pause");
	return 0;
}