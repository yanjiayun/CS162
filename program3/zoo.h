#ifndef ZOO_H
#define ZOO_H

#include<iostream>
#include"zoo.h"
#include"animal.h"
#include"monkey.h"
#include"sea.h"
#include"meerkat.h"

using namespace std;

class Zoo{
	private:
		Monkey *monkey;
		Sea *sea;
		Meerkat *meerkat;
		int m_num;
		int s_num;
		int me_num;
		int a_m_num;
		int a_s_num;
		int a_me_num;
		float bank;
		int type;
		float food_price;
		int lucky;
	public:
		Zoo();
		Zoo(int m_num, int s_num, int me_num);
		Zoo(const Zoo& other);
		const Zoo& operator=(const Zoo& other);
		~Zoo();
		void set_m_num(int new_m_num);
		int get_m_num()const;
    	void set_s_num(int new_s_num);
		int get_s_num()const;
    	void set_me_num(int new_me_num);
		int get_me_num()const;		
		void set_a_m_num(int new_a_m_num);
		int get_a_m_num()const;
    	void set_a_s_num(int new_a_s_num);
		int get_a_s_num()const;
    	void set_a_me_num(int new_a_me_num);
		int get_a_me_num()const;		
		void set_bank(float new_bank);
		float get_bank()const;
		void set_type(int new_type);
		int get_type()const;
		void set_food_price(float new_food_price);
		float get_food_price()const;
		void set_lucky(int new_lucky);
		int get_lucky()const;
		void buy_animal1(int &a1, int &a2,int &a3);
		void buy_animal(int &a1, int &a2,int &a3);
		void initial();
		bool check_num(const int &x);
		void increase_age();
		void create_m();
		void create_s();
		void create_me();
		void choose_type();
		void week_food();
		void adult_num();
		void be_sick();
		void cure_m();
		void cure_s();
		void cure_me();
		void give_birth();
		void remove_m();
		void remove_s();
		void remove_me();
		void instruction1();
		void instruction2();
		void earn1();
		void earn();
		void create();
		void create2(const int &a1, const int &a2, const int &a3);
		void week_1();
		void week_2();
		void week_3();
		void add_m();
		void add_s();
		void add_me();
		void buy_m();
		void buy_s();
		void buy_me();
	};

#endif
