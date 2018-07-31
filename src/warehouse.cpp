#include "warehouse.h"

Warehouse::Warehouse(std::string label) : label(label){
	resource = new (int) * 5;
}

Warehouse::~Warehouse(){
	delete [] resources;
}

int Warehouse::maxWarehouseStorage(){
	return level * amount_of_warehouse;
}

bool Warehouse::isFull(){
	int total_of_resouces = 0;

	for(int i = 0; i < 5; i++){
		total_of_resouces += resources[1].getQuantity();
	}

	return ! (total_of_resouces <= maxWarehouseStorage());
}