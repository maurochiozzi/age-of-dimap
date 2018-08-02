#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource{
public:
	// Label of the resource;
	// Can be:
	// wood
	// metal
	// clay
	// rock
	// food
	std::string label;
	// Amount of resource
	int amount;

	Resource(std::string label);
	~Resource();

	int getAmount();
};

#endif
