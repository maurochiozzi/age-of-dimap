#include "selectable.h"

Selectable::Selectable(std::string label) label(label) {
	is_selected = false;
}

bool Selectable::isSelected(){
	return is_selected;
}

bool Selectable::selectThis(){
	Selectable::selectedObject.unselectThis();
	is_selected = true;

	return is_selected;
}

bool Selectable::unselectThis(){
	is_selected = false;
	selectedObject = NULL;

	return is_selected;
}

std::string Selectable::getLabel(){
	return label;
}

static Selectable Selectable::getSelectedObject(){
	return selectedObject;
}