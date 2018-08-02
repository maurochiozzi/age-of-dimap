#ifndef BARRACK_H
#define BARRACK_H

#include <string>
#include "warrior.h"

class Barrack{
public:
	// Barrack label
	std::string label;
	// Warriors that will be stored in the warehouse
	// 5 in total. See warrior.h for more information
	Warrior * warriors;
	// Warehouse level. Higher the level, higher the capacity of storage
	int level;
	// Quantity of barracks built
	int amount_of_barracks;
	// Cost to build one barrack
	int cost;

	Barrack(std::string label);
	~Barrack();
	
	int maxBarrackStorage();
	bool isFull();

};

#endif