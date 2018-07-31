#include "house.h"

House::House(std::string label) : label(label){
	//resource = new (int) * 5;
}

House::~House(){
	delete [] workers;
}

int House::maxHouseStorage(){
	return level * amount_of_house;
}

bool House::isFull(){
	int total_of_workers = 0;

	for(int i = 0; i < 5; i++){
		total_of_workers += workers[i].getAmount();
	}

	return ! (total_of_workers <= maxHouseStorage());
}
