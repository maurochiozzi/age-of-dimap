#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>

/*
	This class represents the behavior of a warrior

	Mauro Chiozzi
*/
class Warrior{
public:
	// The label that will be displayed in the game
	std::string label;
	// Warrior's level
	int level;
	// The damage the warrior will give in battle
	int damage;
	// Warrior type; will be defined latter on
	int type;
	// Amount of warriors of the village. Don't know if
	// this is a correct aproach to OOPing style. 
	int amount_of_warriors;
	// This represents the cost to train a warrior (or buy, or whatever :P)
	int cost;

	Warrior(std::string label);

	int amountOfDamage();
};

#endif