#ifndef BATS_H
#define BATS_H

#include<iostream>
#include "event.h"

using namespace std;

class Bats: public Event{
	public:
		Bats(string);
		void set_name(string new_name);
		string get_name()const;
};

#endif
