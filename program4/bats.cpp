/******************************************************
** Program: bats.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the bats class 
** Input: All the enter as required 
** Output: Each room have one or none event.
******************************************************/
#include<iostream>
#include"bats.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for bats class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Bats::Bats(string name):Event(name){
	name = "B";
}

/***************************************************
* Function: set_name
* Description: Setter/Accessors: bats's name
* Parameters: a string
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Bats::set_name(string new_name){
	name = new_name;
}

/***************************************************
* Function: get_name
* Description: Getter/Mutators: bats's name
* Parameters: a string
* Return value: a string
* Precondition: none
* Postcondition: none
***************************************************/
string Bats::get_name()const{
	string name = "B";
	return name;
}
