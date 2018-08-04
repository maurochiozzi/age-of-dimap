#ifndef HOUSE_H
#define HOUSE_H

#include "worker.h"
#include "selectableobject.h"

/*
	Houses are to "store" villagers (workers for now)

	Jordy Araujo
*/
class House : public SelectableObject {
private:
	// house id
	int id;

public:
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

	House();
    ~House();

	int maxHouseStorage();
    bool isFull();
};

#endif