#ifndef PERSON_H
#define PERSON_H

#include <string.h>
#include "selectableobject.h"

class Person : public SelectableObject {
private:
	int id;

public:

	// Until now, no specific functions

	Person::Person(std::string label);
};

#endif