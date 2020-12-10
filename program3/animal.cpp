/******************************************************
** Program: animal.cpp
** Author: Jiayun Yan
** Date: 05/12/2019
** Description: This is the animal.cpp, contain the setter and getter for animal class
** Input: none
** Output: none
******************************************************/
#include<iostream>
#include"animal.h"

using namespace std;

/***************************************************
* Function: set_age
* Description: Setter/Accessors: animal's age
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Animal::set_age(int new_age){
	age = new_age;
}

/***************************************************
* Function: get_age
* Description: Getter/Mutators: animal's age
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Animal::get_age()const{
	return age;
}

/***************************************************
* Function: set_is_sick
* Description: Setter/Accessors: whether this animal is sick
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Animal::set_is_sick(int new_is_sick){
	is_sick = new_is_sick;
}

/***************************************************
* Function: get_is_sick
* Description: Getter/Mutators: whether this animal is sick
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
int Animal::get_is_sick()const{
	return is_sick;
}

/***************************************************
* Function: set_is_baby
* Description: Setter/Accessors: whether this animal is baby
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Animal::set_is_baby(int new_is_baby){
	is_baby = new_is_baby;
}

/***************************************************
* Function: get_is_baby
* Description: Getter/Mutators: whether this animal is baby
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
int Animal::get_is_baby()const{
	return is_baby;
}
