/******************************************************
** Program: monkey.cpp
** Author: Jiayun Yan
** Date: 05/12/2019
** Description: This is the monkey.cpp, contain the setter and getter for monkey class
** Input: none
** Output: none
******************************************************/
#include<iostream>
#include"monkey.h"
#include"animal.h"

using namespace std;

/***************************************************
* Function: set_m_cost
* Description: Setter/Accessors: monkey's price
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Monkey::set_m_cost(int new_m_cost){
	m_cost = new_m_cost;
}

/***************************************************
* Function: get_m_cost
* Description: Getter/Mutators: monkey's price
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Monkey::get_m_cost()const{
	return m_cost;
}

/***************************************************
* Function: set_m_baby_num
* Description: Setter/Accessors: monkey's baby number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Monkey::set_m_baby_num(int new_m_baby_num){
	m_baby_num = new_m_baby_num;
}

/***************************************************
* Function: get_m_baby_num
* Description: Getter/Mutators: monkey's baby number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
int Monkey::get_m_baby_num()const{
	return m_baby_num;
}

/***************************************************
* Function: set_m_food_fee
* Description: Setter/Accessors: monkey's food fee
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Monkey::set_m_food_fee(int new_m_food_fee){
	m_food_fee = new_m_food_fee;
}

/***************************************************
* Function: get_m_food_fee
* Description: Getter/Mutators: monkey's food fee
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Monkey::get_m_food_fee()const{
	return m_food_fee;
}

/***************************************************
* Function: set_m_revenue
* Description: Setter/Accessors: monkey's revenue
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Monkey::set_m_revenue(int new_m_revenue){
	m_revenue = new_m_revenue;
}

/***************************************************
* Function: get_m_revenue
* Description: Getter/Mutators: monkey's revenue
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Monkey::get_m_revenue()const{
	return m_revenue;
}
