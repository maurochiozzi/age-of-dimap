#include "worker.h"

Worker::Worker(std::string n, int l, int a, int e, Resource *c) : label(label), level(level), amount(amount), eficiency(eficiency), cost(cost){

}

Worker::~Worker(){

}

int Worker::get_collected_res(){
	return amount * eficiency * level;
}
