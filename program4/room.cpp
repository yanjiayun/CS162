/******************************************************
** Program: room.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the room class 
** Input: All the enter as required 
** Output: Each room have one or none event.
******************************************************/
#include<iostream>
#include"game.h"
#include"room.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for room class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Room::Room(){
	e = NULL;
}

/***************************************************
* Function: set_event
* Description: Setter/Accessors: event
* Parameters: an Event pointer
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Room::set_event(Event *new_e){
	e = new_e;
}

/***************************************************
* Function: get_event
* Description: Getter/Mutators: event
* Parameters: an Event pointer
* Return value: an Event pointer
* Precondition: none
* Postcondition: none
***************************************************/
Event* Room::get_event()const{
	return e;
}

/***************************************************
* Function: destructor
* Description: use to free memory 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
Room::~Room(){
	if( e != NULL){
		delete e;
	}
}

