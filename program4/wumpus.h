#ifndef WUMPUS_H
#define WUMPUS_H

#include<iostream>
#include<string>
#include "event.h"

using namespace std;

class Wumpus : public Event { 
	public:
		Wumpus(string);
		void set_name(string new_name);
		string get_name()const;
};


#endif
