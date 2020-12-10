#ifndef PIT_H
#define PIT_H

#include<iostream>
#include"event.h"

using namespace std;

class Pit : public Event{
	public:
		Pit(string);
		void set_name(string new_name);
		string get_name()const;
};

#endif
