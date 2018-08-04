#include "worker.h"

Worker::Worker(int l, int a, int e, Resource *c) : level(level), amount(amount), eficiency(eficiency), cost(cost){

}

Worker::~Worker(){

}

int Worker::get_collected_res(){
	return amount * eficiency * level;
}

int Worker::getAmount(){
	return amount;
}