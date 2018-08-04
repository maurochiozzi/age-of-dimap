#include "warrior.h"

Warrior::Warrior(std::string label) {
	Person(label);
}

int Warrior::amountOfDamage(){
	return level * damage * amount_of_warriors;
}