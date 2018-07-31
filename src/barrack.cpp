#include "barrack.h"

Barrack::Barrack(std::string label) : label(label){
	//warrior = new (int) * 5;
}

Barrack::~Barrack(){
	delete [] warriors;
}

int Barrack::maxBarrackStorage(){
	return level * amount_of_barrack;
}

bool Barrack::isFull(){
	int total_of_warriors = 0;

	for(int i = 0; i < 5; i++){
		total_of_warriors += warriors[i].getAmount();
	}

	return total_of_warriors > maxBarrackStorage();
}
