#ifndef _WORKER_H_
#define _WORKER_H_

#include <string.h>
#include "resource.h"
#include "person.h"

/*
	This class has some characteristics for the worker

	Jordy Araujo
*/
class Worker : public Person {
private:
	// Worker Id
	int id;

public:
	//Worker's level
	int level;
	//Amount of workers
	int amount;
	//workers eficiency
	int eficiency;
	// This represents the cost to train a warrior (or buy, or whatever :P)
	Resource * cost;

	Worker(std::string label, int level, int amount, int eficiency, Resource *cost);
      
	~Worker();

	int get_collected_res();

	int getAmount();

};


#endif
