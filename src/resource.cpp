#include "resource.h"

Resource::Resource(std::string label) : label(label){

}

int Resource::getQuantity(){
	return quantity;
}