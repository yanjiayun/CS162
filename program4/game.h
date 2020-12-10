#ifndef GAME_H
#define GAME_H

#include<iostream>
#include<vector>
#include"room.h"

using namespace std;

class Game{
	private:
		int xx;
		int yy;
		int fx;
		int fy;
		int num;
		bool if_wake;
		bool if_alive;
		bool p_live;
		bool g_pick;
		int size;
		Room a;
		vector<Room> row;
		vector<vector<Room>> cave;
	public:
		Game(int);
		void set_num(int new_num);
		int get_num()const;
		void set_fx(int new_fx);
		int get_fx()const;
		void set_fy(int new_fy);
		int get_fy()const;
		void set_xx(int new_xx);
		int get_xx()const;
		void set_yy(int new_yy);
		int get_yy()const;
		void set_p_live(bool new_p_live);
		bool get_p_live()const;
		void set_g_pick(bool new_g_pick);
		bool get_g_pick()const;
		void set_if_wake(bool new_if_wake);
		bool get_if_wake()const;
		void set_if_alive(bool new_if_alive);
		bool get_if_alive()const;
		void set_size(int new_size);
		int get_size()const;
		void print(const int &size);
		void print_d(const int &size);
		void set_wumpus();
		void set_bats();
		void set_pit();
		void set_gold();
		void move_w();
		void set_player();
		void kill();
		void percepts();
		void move_d();
		void move();
		void check();
		void check_d();
		void set_all();
		void play();
		void play_d();
};

#endif 
