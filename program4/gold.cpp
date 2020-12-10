/******************************************************
** Program: gold.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the gold class 
** Input: All the enter as required 
** Output: Each room have one or none event.
******************************************************/

#include<iostream>
#include"gold.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for gold class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Gold::Gold(string name):Event(name){
	name = "G";
}

/***************************************************
* Function: set_name
* Description: Setter/Accessors: gold's name
* Parameters: a string
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Gold::set_name(string new_name){
	name = new_name;
}

/***************************************************
* Function: get_name
* Description: Getter/Mutators: gold's name
* Parameters: a string
* Return value: a string
* Precondition: none
* Postcondition: none
***************************************************/
string Gold::get_name()const{
	string name = "G";
	return name;
}
