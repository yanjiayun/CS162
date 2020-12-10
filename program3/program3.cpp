/******************************************************
** Program: program3.cpp
** Author: Jiayun Yan
** Date: 05/12/2019
** Description: This is the drive.cpp, contain main function 
** Input: All the enter as required 
** Output: The sepcial event for each week, the adult animals amount, babies animals amount and the bank balance.
******************************************************/

#include<iostream>
#include<stdlib.h>
#include<ctime>
#include"zoo.h"
#include"animal.h"


using namespace std;

int main(){	
	srand(time(NULL));
	Zoo z;	
	z.instruction1();
	z.instruction2();
	
	return 0;
}
