#include "dice.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

Dice::Dice(){
}
Dice::~Dice(){
}
int Dice::getValue(){
	srand(time(0));
	n = (rand() % 11) + 2;
	while (n > 12) {
		srand(time(0));
		n = (rand() % 11) + 1;
	}
	return n;
}