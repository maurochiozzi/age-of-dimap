#ifndef _WORKER_H_
#define _WORKER_H_

#include "resource.h"
#include "selectableobject.h"

/*
	This class has some characteristics for the worker

	Jordy Araujo
*/
class Worker : public SelectableObject {
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

	Worker(int, int, int, Resource *);
      
	~Worker();

	int get_collected_res();

	int getAmount();

};


#endif
