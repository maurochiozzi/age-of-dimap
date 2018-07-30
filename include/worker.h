#ifndef _WORKER_H_
#define _WORKER_H_

#include <string>
#include "resource.h"

class Worker{
public:
	std::string name;
	int level;
	int amount;
	int eficiency;
	Resource * cost;

	Worker(std::string, int, int, int, Resource *);
      
	~Worker();

	int get_collected_res();

};


#endif
