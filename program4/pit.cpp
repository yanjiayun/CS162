/******************************************************
** Program: pit.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the pit class 
** Input: All the enter as required 
** Output: Each room have one or none event.
******************************************************/
#include<iostream>
#include"pit.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for pit class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Pit::Pit(string name):Event(name){
	name = "P";
}

/***************************************************
* Function: set_name
* Description: Setter/Accessors: pit's name
* Parameters: a string
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Pit::set_name(string new_name){
	name = new_name;
}

/***************************************************
* Function: get_name
* Description: Getter/Mutators: pit's name
* Parameters: a string
* Return value: a string
* Precondition: none
* Postcondition: none
***************************************************/
string Pit::get_name()const{
	string name = "P";
	return name;
}
