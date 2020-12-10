#ifndef MEERKAT_H
#define MEERKAT_H

#include<iostream>
#include"animal.h"

using namespace std;

class Meerkat: public Animal{
	private:
		int me_cost;
		int me_baby_num;
		int me_food_fee;
		int me_revenue;
	public:		
		void set_me_cost(int new_me_cost);
		int get_me_cost()const;
		void set_me_baby_num(int new_me_baby_num);
		int get_me_baby_num()const;
		void set_me_food_fee(int new_me_food_fee);
		int get_me_food_fee()const;
		void set_me_revenue(int new_me_revenue);
		int get_me_revenue()const;
};

#endif

