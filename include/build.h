#ifndef BUILDING_H
#define BUILDING_H

#include <string.h>
#include "selectableobject.h"

/*
	Abstract class to represent a building

	Mauro Chiozzi
*/
class Building : public SelectableObject {
private:
	int level;
public:
	Building(std::string label);
};


#endif