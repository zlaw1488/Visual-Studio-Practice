#include <iostream>
#include "HeaderCritter.h"


using namespace std;




int main() {
	//CONSTRUCTOR
	Critter crit(2,2);
	Critter crit2(3,4);
	Critter crit3(4, 5);
	Critter crit4(5, 5);
	Critter crit5(5, 5);
	Critter crit6(5, 5);
	Critter crit7(5, 5);
	Critter crit8(5, 5);
	

	crit.Talk();
	
	cout << "Critter Caretaker\n\n" << endl;
	cout << "0 -- QUIT." << endl;
	cout << "1 -- Feed your Critter." << endl;
	cout << "2 -- Talk to your Critter." << endl;
	cout << "3 -- Play with your Critter." << endl;
	cout << "4 -- Display Hunger & Boredom Levels." << endl;
	cout << "5 -- Display Number of Critters." << endl;
	
	int Choice = 1;


		while (Choice != 0) {
			cout << "Enter your Choice." << endl;
			cin >> Choice;

			switch (Choice)
			{
			case 0:
				cout << "Goodbye!" << endl;
				break;
			case 1:
				crit.Eat(4);
				break;
			case 2:
				crit.Talk();
				break;
			case 3:
				crit.Play();
				break;
			case 4:
				crit.DisplayLevels();
				break;
			case 5:
				cout << "\nCritter Total\n" << Critter::GetTotal() << endl;
				break;

			default:
				cout << Choice << " is not a Choice!" << endl;
				break;
			}
		}

		
	

	system("pause");

	return 0;
}