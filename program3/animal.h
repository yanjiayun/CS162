#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>

using namespace std;

class Animal{
	protected:
		int age;
		int is_sick;
		int is_baby;
	public:
		void set_age(int new_age);
		int get_age()const;
		void set_is_sick(int new_is_sick);
		int get_is_sick()const;
		void set_is_baby(int new_is_baby);
		int get_is_baby()const;
};

#endif
