#include "resource.h"

Resource::Resource(std::string label) : label(label){

}

int Resource::getAmount(){
	return amount;
}