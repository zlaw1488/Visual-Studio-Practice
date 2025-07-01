#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "WARRIORS.h"

using namespace std;


int main() {
	srand(time(0));

	Warriors Zigginator;
	Warriors Zandman;

	Warriors* Zigg = &Zigginator;
	Warriors* Zan = &Zandman;

	int turn = 0, die = 0, attack = 0;

	cout << "\nWe, who are about to die, SALUTE YOU!!!" << endl;

	while (true) {
		cout << "\nZigginator's Health is: " << Zigg->health << endl;
		cout << "\nZandman's Health is: " << Zan->health << endl;

		if (turn == 0) 
		{
			if (Zigg->health <= 0 || Zan->health <= 0) {
				break;
				cout << "\nZigginator Prepares to Swing!" << endl;
				die = Zigg->RanNum();

				if (die > 15) {
					attack = Zigg->bigSwing();

					cout << "\nBIG SWING!" << endl;
					cout << "\nZigginator does " << attack << " Damage!" << endl;
					Zan->health = Zan->health - attack;

				}
			}
				else 
				{
					attack = Zigg->swing();
					cout << "\nSwing!" << endl;
					cout << "\nZigginator does " << attack << " Damage!" << endl;
					Zan->health = Zan->health - attack;

				}
				turn = 1;
			}
			else 
			{

			if (Zigg->health <= 0 || Zan->health <= 0) {
				break;
				cout << "\nZandman Prepares to Swing!" << endl;
				die = Zan->RanNum();
				if (die > 15) {
					attack = Zan->bigSwing();
					cout << "\nBIG SWING!" << endl;
					cout << "Zandman does " << attack << " Damage!" << endl;
					Zigg->health = Zigg->health - attack;
				}
			}
				else 
				{
					attack = Zan->swing();
					cout << "\nSwing!" << endl;
					cout << "\nZandman does " << attack << " Damage." << endl;
					Zigg->health = Zigg->health - attack;
				}
				if (Zan->health <= 0)
					break;
				turn = 0;
			}
		}
		if (Zigg->health <= 0)
			cout << "\nZandman CRUSHES Zigginator!!" << endl;

		else
			cout << "\nZigginator CRUSHES Zandman!!" << endl;



	system("pause");
	return 0;
}