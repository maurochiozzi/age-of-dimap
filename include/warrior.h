#include "warrior.h"

Warrior::Warrior(std::string label) : label(label){
	// do nothing
}

int Warrior::amountOfDamage(){
	return level * damage * amount_of_warriors;
}