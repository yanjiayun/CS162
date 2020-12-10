/******************************************************
** Program: event.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the event class, the parent class of pit, bats, gold and wumpus classes
** Input: All the enter as required 
** Output: Each room have one or none event.
******************************************************/
#include<iostream>
#include<string>
#include"event.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for event class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Event::Event(string name){
}

/***************************************************
* Function: set_name
* Description: Setter/Accessors: name of event
* Parameters: a string
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Event::set_name(string new_name){
	name = new_name;
}

/***************************************************
* Function: get_name
* Description: Getter/Mutators: name of event
* Parameters: a string
* Return value: a string
* Precondition: none
* Postcondition: none
***************************************************/
string Event::get_name()const{
	return name;
}
