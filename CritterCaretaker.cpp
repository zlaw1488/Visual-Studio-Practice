#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;

Critter::Critter(int hunger, int boredom) {
	m_hunger = hunger;
	m_boredom = boredom;

	cout << "A New Critter has been Born!" << endl;
}

int Critter::GetMood() {
	return (m_hunger + m_boredom);
}

void Critter::Talk() {
	cout << "I'm a Critter, and I feel \n" << endl;

	int Mood = GetMood();

	if (Mood > 15) {
		cout << " Mad!" << endl;
	}
	else if (Mood > 10) {
		cout << " Frustrated." << endl;
	}
	else if (Mood > 5) {
		cout << " Okay." << endl;
	}
	else {
		cout << "Happy!" << endl;
	}
	PassTime();
	ShowHungerBoredom();

}

void Critter::PassTime(int Time) {
	m_hunger += Time;
	m_boredom += Time;
}

void Critter::Eat(int Food) {
	cout << "Brrrupppp!\n" << endl;

	m_hunger -= Food;
	if (m_hunger < 0) {
		m_hunger = 0;
	}
	PassTime();
	ShowHungerBoredom();

}

void Critter::Play(int Fun) {
	cout << "Whhheeeeeee!\n" << endl;
	m_boredom -= Fun;
	if (m_boredom < 0) {
		m_boredom = 0;
	}
	PassTime();
	ShowHungerBoredom();
}

void Critter::DisplayLevels() {
	cout << "Critter Hunger Level:\n" << m_hunger << endl;
	cout << "Critter Boredom Level:\n" << m_boredom << endl;
}

void Critter::ShowHungerBoredom() {
	if (m_hunger <= 4 && m_boredom <= 4) {
		cout << "I'm not Hungry, and I'm not Bored." << endl;
	}
	else if (m_hunger <= 4 && (m_boredom > 4 && m_boredom < 10)) {
		cout << "I'm not Hungry, but I'm kinda Bored." << endl;
	}
	else if (m_hunger <= 4 && m_boredom > 10) {
		cout << "I'm not Hungry, but I'm VERY Bored." << endl;
	}
	else if ((m_hunger > 4 && m_hunger < 10)  && (m_boredom > 4 && m_boredom < 10)) {
		cout << "I'm kinda Hungry, and I'm kinda Bored." << endl;
	}
	else if ((m_boredom > 10) && (m_boredom > 4 && m_boredom < 10)) {
		cout << "I'm kinda Hungry, but I'm VERY Bored." << endl;
	}
	else if ((m_hunger >= 10) && (m_boredom <= 4)) {
		cout << "I'm VERY Hungry, but I'm not Bored." << endl;
	}
	else if ((m_hunger >= 10) && (m_boredom >= 10)) {
		cout << "I'm STARVING, and I'm VERY Bored!" << endl;
	}


}

int main() {
	//Critter();

	Critter crit;
	//Critter crit(4, 1);

	crit.Talk();

	int Choice = 1;


	do 
	{
	cout << "CRITTER CARETAKER\n" << endl;
	cout << "0 -- Quit\n";
	cout << "1 -- Listen to your Critter\n";
	cout << "2 -- Feed your Critter\n";
	cout << "3 -- Play with your Critter\n";
	cout << "4 -- How are you Feeling?\n\n";

	


	cout << "Choice: ";
	cin >> Choice;

	switch (Choice)

	{
	case 0:
		cout << "Goodbye!\n";
		break;
	case 1:
		crit.Talk();
		break;
	case 2:
		crit.Eat(10);
		break;
	case 3:
		crit.Play(5);
		break;
	case 4:
		crit.DisplayLevels();
		break;
	default:
		cout << "\nSorry, but " << Choice << " isnt't a Valid Choice.\n";

	}
		}  while (Choice != 0);

	

	

	system("pause");
	return 0;
}