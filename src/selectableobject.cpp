#include "selectableobject.h"

/*
	Mauro Chiozzi
*/

SelectableObject::SelectableObject(std::string label) label(label) {
	is_selected = false;
}

bool SelectableObject::isSelected(){
	return is_selected;
}

bool SelectableObject::selectThis(){
	SelectableObject::selectedObject.unselectThis();
	is_selected = true;

	return is_selected;
}

bool SelectableObject::unselectThis(){
	is_selected = false;
	selectedObject = NULL;

	return is_selected;
}

std::string SelectableObject::getLabel(){
	return label;
}

static SelectableObject SelectableObject::getSelectedObject(){
	return selectedObject;
}