#ifndef GOLD_H
#define GOLD_H

#include<iostream>
#include"event.h"

using namespace std;

class Gold : public Event{
	public:
		Gold(string);
		void set_name(string new_name);
		string get_name()const;
};

#endif
