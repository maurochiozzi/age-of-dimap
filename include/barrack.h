#ifndef BARRACK_H
#define BARRACK_H

#include "warrior.h"
#include "selectableobject.h"

/*
	This class represents the barracks of the village

	Mauro Chiozzi
*/
class Barrack : public SelectableObject {
private:
	// barrack id
	int id;
public:
	// Warriors that will be stored in the warehouse
	// 5 in total. See warrior.h for more information
	Warrior * warriors;
	// Warehouse level. Higher the level, higher the capacity of storage
	int level;
	// Quantity of barracks built
	int amount_of_barracks;
	// Cost to build one barrack
	int cost;

	Barrack();
	~Barrack();
	
	int maxBarrackStorage();
	bool isFull();

};

#endif