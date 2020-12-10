/******************************************************
** Program: wumpus.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the wumpus class 
** Input: All the enter as required 
** Output: Wumpus's name
******************************************************/

#include<iostream>
#include<string>
#include"wumpus.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for Wumpus class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Wumpus::Wumpus(string name):Event(name){
	name = "W";
}

/***************************************************
* Function: set_name
* Description: Setter/Accessors: Wumpus's name
* Parameters: a string
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Wumpus::set_name(string new_name){
	name = new_name;
}

/***************************************************
* Function: get_name
* Description: Getter/Mutators: Wumpus's name
* Parameters: a string
* Return value: a string
* Precondition: none
* Postcondition: none
***************************************************/
string Wumpus::get_name()const{
	string name = "W";
	return name;
}

