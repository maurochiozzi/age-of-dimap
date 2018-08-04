#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "resource.h"
#include "selectableobject.h"

/*
	Mauro Chiozzi
*/
class Warehouse : public SelectableObject {
private:
	int id;
public:
	// Resources that will be stored in the warehouse
	// 5 in total. See resource.h for more information
	Resource *resources;
	// Warehouse level. Higher the level, higher the capacity of storage
	int level;
	// Quantity of warehouses built
	int amount_of_warehouse;
	// Cost to build one warehouse
	int cost;

	Warehouse();
	~Warehouse();
	
	int maxWarehouseStorage();
	bool isFull();

};

#endif
