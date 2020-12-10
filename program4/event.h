#ifndef EVENT_H
#define EVENT_H

#include<iostream>
#include<string>

using namespace std;

class Event{
	protected:
		string name;
	public:
		Event(string name);
		virtual void set_name(string new_name);
		virtual string get_name()const;
};

#endif
