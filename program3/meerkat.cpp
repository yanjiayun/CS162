/******************************************************
** Program: meerkat.cpp
** Author: Jiayun Yan
** Date: 05/12/2019
** Description: This is the meerkat.cpp, contain the setter and getter for meerkat class
** Input: none
** Output: none
******************************************************/
#include<iostream>
#include"meerkat.h"

using namespace std;

/***************************************************
* Function: set_me_cost
* Description: Setter/Accessors: meerkat's price
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Meerkat::set_me_cost(int new_me_cost){
	me_cost = new_me_cost;
}

/***************************************************
* Function: get_me_cost
* Description: Getter/Mutators: meerkat's price
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Meerkat::get_me_cost()const{
	return me_cost;
}

/***************************************************
* Function: set_me_baby_num
* Description: Setter/Accessors: meerkat's baby number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Meerkat::set_me_baby_num(int new_me_baby_num){
	me_baby_num = new_me_baby_num;
}

/***************************************************
* Function: get_me_baby_num
* Description: Getter/Mutators: monkey's baby number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
int Meerkat::get_me_baby_num()const{
	return me_baby_num;
}

/***************************************************
* Function: set_me_food_fee
* Description: Setter/Accessors: meerkat's food fee
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Meerkat::set_me_food_fee(int new_me_food_fee){
	me_food_fee = new_me_food_fee;
}

/***************************************************
* Function: get_me_food_fee
* Description: Getter/Mutators: meerkat's food fee
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Meerkat::get_me_food_fee()const{
	return me_food_fee;
}

/***************************************************
* Function: set_me_revenue
* Description: Setter/Accessors: meerkat's revenue
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Meerkat::set_me_revenue(int new_me_revenue){
	me_revenue = new_me_revenue;
}

/***************************************************
* Function: get_me_revenue
* Description: Getter/Mutators: meerkat's revenue
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Meerkat::get_me_revenue()const{
	return me_revenue;
}
