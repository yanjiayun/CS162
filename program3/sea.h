#ifndef SEA_H
#define SEA_H

#include<iostream>
#include"animal.h"

using namespace std;

class Sea: public Animal{
	private:
		int s_cost;
		int s_baby_num;
		int s_food_fee;
		int s_revenue;
	public:
		void set_s_cost(int new_s_cost);
		int get_s_cost()const;
		void set_s_baby_num(int new_s_baby_num);
		int get_s_baby_num()const;
		void set_s_food_fee(int new_s_food_fee);
		int get_s_food_fee()const;
		void set_s_revenue(int new_s_revenue);
		int get_s_revenue()const;
};

#endif
