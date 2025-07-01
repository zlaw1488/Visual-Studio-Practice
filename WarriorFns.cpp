#include <iostream>
#include "WARRIORS.h"

using namespace std;

Warriors::Warriors() {
	health = 100;
}

int Warriors::RanNum() {
	return rand() % 20 + 1;
}

int Warriors::swing() {
	return RanNum();
}

int Warriors::bigSwing() {
	return RanNum() + 20;
}