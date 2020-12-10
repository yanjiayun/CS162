#ifndef ROOM_H
#define ROOM_H

#include<iostream>
#include"event.h"

using namespace std;

class Room {
	private:
		Event *e;
	public:
		Room();
		void set_event(Event *new_e);
		Event* get_event()const;
		~Room();

};

#endif
