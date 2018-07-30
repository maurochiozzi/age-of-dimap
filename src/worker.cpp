#include "worker.h"

Worker::Worker(std::string n, int l, int a, int e, Resource *c) : name(n), leve(l), amount(a), eficiency(e), cost(c){

}

Worker::Worker(){

}

int Worker::get_collected_res(){
	return amount * eficiency * level;
}
