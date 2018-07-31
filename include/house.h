#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include "worker.h"

/*
	Houses are to "store" villagers (workers for now)

	Jordy Araujo
*/
class House{
public:
	// The label that will be displayed in the game
	std::string label;
	// House level
	int level;
	// Workers that will be stored in the house
	// See worker.h for more information 
	Worker *workers;
	// Worker type; will be defined latter on
	int type;
	// Amount of houses built
	int amount_of_house;
	// This represents the cost to train a worker (or buy, or whatever :P)
	int cost;

	House(std::string label);
    ~House();

	int maxHouseStorage();
    bool isFull();
};

#endif