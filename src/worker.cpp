#include "worker.h"

Worker::Worker(std::label, int l, int a, int e, Resource *c) : level(level), amount(amount), eficiency(eficiency), cost(cost){
	Person(label);
}

Worker::~Worker(){

}

int Worker::get_collected_res(){
	return amount * eficiency * level;
}

int Worker::getAmount(){
	return amount;
}