#include "warrior.h"

Warrior::Warrior() {
	// do nothing
}

int Warrior::amountOfDamage(){
	return level * damage * amount_of_warriors;
}