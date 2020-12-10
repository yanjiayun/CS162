/******************************************************
** Program: program5.cpp
** Author: Jiayun Yan
** Date: 06/09/2019
** Description: This is the drive.cpp, contain main function 
** Input: All the enter as required, the number user wanted to include, whether they want to include another one, whether they want to do this again and they want to sort ascending or descending.
** Output: The sorted linked list, the prime and how many primes are in the list.
******************************************************/
#include <iostream>
#include "list.h"

using namespace std;

int main(){
	int f = 1;
	do{
		char a = 'y';
		char e;
		Linked_List b;
		int c,value,d;
		do{
			cout << "Please enter a number: ";
			cin >> value;
			b.push_back(value);
			cout << "Do you want to include another num(y or n): ";
			cin >> a;
		}while(a == 'y');	
		cout << "Sort ascending or descending(a or d): ";
		cin >> e;
		if (e == 'a'){
			b.sort_ascending();
		}
		else if(e == 'd'){
			b.sort_descending();
		}
		b.print();
		b.is_prime();
		b.clear();
		cout << "Do you want to do this again(0-No or 1-Yes): ";
		cin >> f;
	}while(f == 1);
	return 0;
}
