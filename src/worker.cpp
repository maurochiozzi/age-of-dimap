#ifndef _WORKER_H_
#define _WORKER_H_

#include <string>
#include "resource.h"

class Worker{
public:
	// The label that will be displayed in the game
	std::string label;
	//Worker's level
	int level;
	//Amount of workers
	int amount;
	//workers eficiency
	int eficiency;
	// This represents the cost to train a warrior (or buy, or whatever :P)
	Resource * cost;

	Worker(std::string, int, int, int, Resource *);
      
	~Worker();

	int get_collected_res();

	int getAmount();

};


#endif
