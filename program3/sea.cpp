/******************************************************
** Program: sea.cpp
** Author: Jiayun Yan
** Date: 05/12/2019
** Description: This is the sea.cpp, contain the setter and getter for sea class
** Input: none
** Output: none
******************************************************/
#include<iostream>
#include"sea.h"
#include"animal.h"

using namespace std;

/***************************************************
* Function: set_s_cost
* Description: Setter/Accessors: sea otter's price
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Sea::set_s_cost(int new_s_cost){
	s_cost = new_s_cost;
}

/***************************************************
* Function: get_s_cost
* Description: Getter/Mutators: sea otter's price
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Sea::get_s_cost()const{
	return s_cost;
}

/***************************************************
* Function: set_s_baby_num
* Description: Setter/Accessors: sea otter's baby number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Sea::set_s_baby_num(int new_s_baby_num){
	s_baby_num = new_s_baby_num;
}

/***************************************************
* Function: get_s_baby_num
* Description: Getter/Mutators: sea otter's baby number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
int Sea::get_s_baby_num()const{
	return s_baby_num;
}

/***************************************************
* Function: set_s_food_fee
* Description: Setter/Accessors: sea otter's food fee
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Sea::set_s_food_fee(int new_s_food_fee){
	s_food_fee = new_s_food_fee;
}

/***************************************************
* Function: get_s_food_fee
* Description: Getter/Mutators: sea otter's food fee
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Sea::get_s_food_fee()const{
	return s_food_fee;
}

/***************************************************
* Function: set_s_revenue
* Description: Setter/Accessors: sea otter's revenue
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Sea::set_s_revenue(int new_s_revenue){
	s_revenue = new_s_revenue;
}

/***************************************************
* Function: get_s_revenue
* Description: Getter/Mutators: sea otter's revenue
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Sea::get_s_revenue()const{
	return s_revenue;
}

