#ifndef MONKEY_H
#define MONKEY_H

#include<iostream>
#include"animal.h"

using namespace std;

class Monkey: public Animal{
	private:
		int m_cost;
		int m_baby_num;
		int m_food_fee;
		int m_revenue;
	public:
		void set_m_cost(int new_m_cost);
		int get_m_cost()const;
		void set_m_baby_num(int new_m_baby_num);
		int get_m_baby_num()const;
		void set_m_food_fee(int new_m_food_fee);
		int get_m_food_fee()const;
		void set_m_revenue(int new_m_revenue);
		int get_m_revenue()const;
};

#endif
