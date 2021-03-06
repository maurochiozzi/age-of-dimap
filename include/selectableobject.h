#ifndef SELECTABLE_H
#define SELECTABLE_H

#include <string>

/*
	This class has all the basics for a selectable object by the user.

	Extend this class for all object that you need to be selectable

	Mauro Chiozzi
*/
class SelectableObject {
private:
	// Stores the selected object by the player
	static SelectableObject selectedObject;

	// The label that will be displayed when the player select the object
	std::string label;

	// As the variable says by itself, stores if the the object is selected by the play or not
	bool is_selected;

public:
	// Constructor requires necessarily the label
	interface SelectableObject(std::string label);

	// Returns if the object is selected or not. Yeah, until now I don't know any aplication for
	// this method, but who knows? 
	bool isSelected();

	// You may Select the object!
	// And when you do that, unselect the previously selected object
	bool selectThis();

	// Here you unselect it. Thanks
	bool unselectThis();

	// Returns the object label to be displayed in the game content 
	std::string getLabel();

	// Returns the actual selected object. It can be null if the player unselected
	// the actual object and haven't selected other
	static SelectableObject getSelectedObject();
};

#endif