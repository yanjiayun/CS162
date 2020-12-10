/******************************************************
** Program: zoo.cpp
** Author: Jiayun Yan
** Date: 05/12/2019
** Description: This is the zoo class 
** Input: All the enter as required 
** Output: The sepcial event for each week, the adult animals amount, babies animals amount and the bank balance.
******************************************************/
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include"zoo.h"
#include"animal.h"
#include"monkey.h"
#include"sea.h"
#include"meerkat.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for zoo class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Zoo::Zoo(){
	monkey = NULL;
	sea = NULL;
	meerkat = NULL;
}

/***************************************************
* Function: Constructor
* Description: constructor for zoo class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Zoo::Zoo(int m_num,int s_num,int me_num){
	monkey = new Monkey [m_num];
	sea = new Sea [s_num];
	meerkat = new Meerkat [me_num];
}

/***************************************************
* Function: copy constuctor
* Description: use to copy 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
Zoo::Zoo(const Zoo& other){
	if(m_num > 0){
		monkey = new Monkey [other.m_num];
		m_num = other.m_num;
		for(int i=0; i<m_num; i++){
			monkey[i] = other.monkey[i];
		}	
	}

	else if (m_num == 0){
		monkey = NULL;
	}
	if(s_num > 0){
		sea = new Sea [other.s_num];
		s_num = other.s_num;
		for(int i=0; i<s_num; i++){
			sea[i] = other.sea[i];
		}
	}
	else if (s_num == 0){
		sea = NULL;
	}

	if(me_num > 0){
		meerkat = new Meerkat [other.me_num];
		me_num = other.me_num;
		for(int i=0; i<me_num; i++){
			meerkat[i] = other.meerkat[i];
		}
	}
	else if(me_num == 0){
		meerkat = NULL;
	}
}

/***************************************************
* Function: Assignment operator overload 
* Description: use to let something equal to something
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
const Zoo& Zoo::operator=(const Zoo& other){
	delete [] monkey;
	monkey = new Monkey [other.m_num];
	m_num = other.m_num;
	for(int i=0; i<m_num; i++){
		monkey[i] = other.monkey[i];
	}

	delete [] sea;
	sea = new Sea [other.s_num];
	s_num = other.s_num;
	for(int i=0; i<s_num; i++){
		sea[i] = other.sea[i];
	}

	delete [] meerkat; 
	meerkat = new Meerkat [other.me_num];
	me_num = other.me_num;
	for(int i=0; i<me_num; i++){
		meerkat[i] = other.meerkat[i];
	}
}

/***************************************************
* Function: destructor
* Description: use to free memory 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
Zoo::~Zoo(){
	delete [] monkey;
	delete [] sea;
	delete [] meerkat; 
}

/***************************************************
* Function: set_m_num
* Description: Setter/Accessors: monkey number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_m_num(int new_m_num){
	m_num = new_m_num;
}

/***************************************************
* Function: get_m_num
* Description: Getter/Mutators: monkey number
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_m_num()const{
	return m_num;
}

/***************************************************
* Function: set_a_m_num
* Description: Setter/Accessors: adult monkey number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_a_m_num(int new_a_m_num){
	a_m_num = new_a_m_num;
}

/***************************************************
* Function: get_a_m_num
* Description: Getter/Mutators: adult monkey number
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_a_m_num()const{
	return a_m_num;
}

/***************************************************
* Function: set_s_num
* Description: Setter/Accessors: sea otter number 
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_s_num(int new_s_num){
	s_num = new_s_num;
}

/***************************************************
* Function: get_s_num
* Description: Getter/Mutators: sea otter number 
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_s_num()const{
	return s_num;
}

/***************************************************
* Function: set_a_s_num
* Description: Setter/Accessors: adult sea otter number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_a_s_num(int new_a_s_num){
	a_s_num = new_a_s_num;
}

/***************************************************
* Function: get_a_s_num
* Description: Getter/Mutators: adult sea otter number
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_a_s_num()const{
	return a_s_num;
}

/***************************************************
* Function: set_me_num
* Description: Setter/Accessors: meerkat number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_me_num(int new_me_num){
	me_num = new_me_num;
}

/***************************************************
* Function: get_me_num
* Description: Getter/Mutators: meerkat number
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_me_num()const{
	return me_num;
}

/***************************************************
* Function: set_a_me_num
* Description: Setter/Accessors: adult meerkat number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_a_me_num(int new_a_me_num){
	a_me_num = new_a_me_num;
}

/***************************************************
* Function: get_a_me_num
* Description: Getter/Mutators: adult meerkat number
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_a_me_num()const{
	return a_me_num;
}

/***************************************************
* Function: set_bank
* Description: Setter/Accessors: bank balance 
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_bank(float new_bank){
	bank = new_bank;
}

/***************************************************
* Function: get_bank
* Description: Getter/Mutators: bank balance 
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
float Zoo::get_bank()const{
	return bank;
}

/***************************************************
* Function: set_type
* Description: Setter/Accessors: the food type
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_type(int new_type){
	type = new_type;
}

/***************************************************
* Function: get_type
* Description: Getter/Mutators: the food type
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_type()const{
	return type;
}

/***************************************************
* Function: set_food_price
* Description: Setter/Accessors: food price 
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_food_price(float new_food_price){
	food_price = new_food_price;
}

/***************************************************
* Function: get_food_price
* Description: Getter/Mutators: food price 
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
float Zoo::get_food_price()const{
	return food_price;
}

/***************************************************
* Function: set_lucky
* Description: Setter/Accessors: the lucky one be sick or give birth 
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::set_lucky(int new_lucky){
	lucky = new_lucky;
}

/***************************************************
* Function: get_lucky
* Description: Getter/Mutators: the lucky one be sick or give birth 
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Zoo::get_lucky()const{
	return lucky;
}

/***************************************************
* Function: initial
* Description: To initial bank balance, monkey number, sea otter number, meerkat number and food price 
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Zoo::initial(){
	set_bank(100000.00);
	set_m_num(0);
	set_s_num(0);
	set_me_num(0);
	set_food_price(40.00);
}

/***************************************************
* Function: check_num
* Description: To check users' input about buy amount, they are just allow to buy 1, 2 or 0
* Parameters: an integer number
* Return value: A bool
* Precondition: the input should be an integer
* Postcondition: the buy amount is 1, 2 or 0
***************************************************/
bool Zoo::check_num(const int &x){
	bool check = true;
	if(x != 1 && x != 2){
		check = false;
		cout << "Error! You can just buy one or two: ";
	}
	return check;
}

/***************************************************
* Function: buy_animal1
* Description: buy animal function for first week
* Parameters: 3 integer number
* Return value: none
* Precondition: none 
* Postcondition: the user finish buy animal for first week
***************************************************/
void Zoo::buy_animal1(int &a1, int &a2, int&a3){
	int a;
	a1 = 0;
	a2 = 0;
	a3 = 0;
	bool check1,check2,check3;
	cout << "What animal did you want to buy?\nMonkeys cost $15,000 each\nSea Otters cost $5,000 each\nMeerkats cost $500 each." << endl;		
	cout << "☆Your current bank balance is: $" << bank << endl;		
	cout << "You have: 0 adult monkey, 0 baby monkey; 0 adult sea otter, 0 baby sea otter, 0 adult meerkat, 0 baby meerkat." << endl;  		
	cout << "Press 1-Monkeys, 2-Sea Otters, 3-Meerkats: ";
	cin >> a;
	if(a == 1){
		cout << "How many monkeys do you want, one or two: ";
		do{
			cin >> a1;
			check1 = check_num(a1);      // just allow to buy 1 or 2 animals
		}while(check1 == false);
		bank -= 15000*a1;
		set_m_num(m_num+a1);
	}
	else if( a == 2){
		cout << "How many sea otters do you want,one or two: ";
		do{
			cin >> a2;
			check2 = check_num(a2);
		}while(check2 == false);       // just allow to buy 1 or 2 animals
		bank -= 5000*a2;
		set_s_num(s_num+a2);
	}
	else if(a == 3){
		cout << "How many meerkats do you want,one or two: " ;
		do{
			cin >> a3;
			check3 = check_num(a3);
		}while(check3 == false);       // just allow to buy 1 or 2 animals
		bank -= 500*a3;
		set_me_num(me_num+a3);
	}
}

/***************************************************
* Function: buy_animal
* Description: buy animal function for other weeks
* Parameters: 3 integer number
* Return value: none
* Precondition: the first week should not run out of money 
* Postcondition: the user finish buy animal for other weeks
***************************************************/
void Zoo::buy_animal(int &a1, int &a2, int&a3){
	int a;
	a1 = 0;
	a2 = 0;
	a3 = 0;
	bool check1,check2,check3;
	adult_num();
	cout << "What animal did you want to buy?\nMonkeys cost $15,000 each\nSea Otters cost $5,000 each\nMeerkats cost $500 each." << endl;		
	cout << "☆Your current bank balance is: $" << bank << endl;		
	cout << "You have: " << a_m_num << " adult monkey(s), " << m_num-a_m_num << " baby monkey(s), " << a_s_num << " adult sea otter(s), " << s_num-a_s_num << " baby sea otter(s), " << a_me_num <<" adult meerkat(s), and " << me_num-a_me_num << " baby meerkat(s) now." << endl;  		
	cout << "Press 1-Monkeys, 2-Sea Otters, 3-Meerkats, 4-not buy and 5-leave:";
	cin >> a;
	if(a == 1){
		cout << "How many monkeys do you want, one or two: ";
		do{
			cin >> a1;
			check1 = check_num(a1);
		}while(check1 == false);
		bank -= 15000*a1;
	}
	else if(a == 2){
		cout << "How many sea otters do you want,one or two: ";
		do{
			cin >> a2;
			check2 = check_num(a2);
		}while(check2 == false);
		bank -= 5000*a2;
	}
	else if(a == 3){
		cout << "How many meerkats do you want,one or two: " ;
		do{
			cin >> a3;
			check3 = check_num(a3);
		}while(check3 == false);
		bank -= 500*a3;
	}
	else if(a == 4){
		cout << "You do not buy any animal for this week." << endl;
	}
	else{
		bank = 0;
	}
}

/***************************************************
* Function: increase_age
* Description: increase animals' age for each week 
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: the animal grow up 1 week
***************************************************/
void Zoo::increase_age(){
	for(int i=0; i<m_num; i++){
		int a = monkey[i].get_age();		
		monkey[i].set_age(a+1);
		if(monkey[i].get_age() > 5){
			monkey[i].set_is_baby(0);
		}
		else if(monkey[i].get_age() <= 5){
			monkey[i].set_is_baby(1);
		}
	}
	
	for(int i=0; i<s_num; i++){
		int b = sea[i].get_age();		
		sea[i].set_age(b+1);
		if(sea[i].get_age() > 5){
			sea[i].set_is_baby(0);
		}
		else if(sea[i].get_age() <= 5){
			sea[i].set_is_baby(1);
		}
	}

	for(int i=0; i<me_num; i++){
		int c = meerkat[i].get_age();		
		meerkat[i].set_age(c+1);
		if(meerkat[i].get_age() > 5){
			meerkat[i].set_is_baby(0);
		}
		else if(meerkat[i].get_age() <= 5){
			meerkat[i].set_is_baby(1);
		}
	}
}

/***************************************************
* Function: create_m
* Description: create monkey array
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: monkey array be created
***************************************************/
void Zoo::create_m(){
	monkey = new Monkey [m_num];
	for(int i=0; i<m_num; i++){
		monkey[i].set_m_cost(15000);
		monkey[i].set_m_baby_num(1);
		monkey[i].set_m_revenue(1500);
		monkey[i].set_is_sick(0);
		monkey[i].set_age(104);
		monkey[i].set_is_baby(0);
	}
}

/***************************************************
* Function: create_s
* Description: create sea otter array
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: sea otter array be created
***************************************************/
void Zoo::create_s(){
	sea = new Sea [s_num];
	for(int i=0; i<s_num; i++){
		sea[i].set_s_cost(5000);
		sea[i].set_s_baby_num(2);
		sea[i].set_s_revenue(250);
		sea[i].set_is_sick(0);
		sea[i].set_age(104);
		sea[i].set_is_baby(0);
	}
}

/***************************************************
* Function: create_me
* Description: create meerkat array
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: meerkat array be created
***************************************************/
void Zoo::create_me(){
	meerkat = new Meerkat [me_num];
	for(int i=0; i<me_num; i++){
		meerkat[i].set_me_cost(500);
		meerkat[i].set_me_baby_num(5);
		meerkat[i].set_me_revenue(25);
		meerkat[i].set_is_sick(0);
		meerkat[i].set_age(104);
		meerkat[i].set_is_baby(0);
	}
}

/***************************************************
* Function: choose_type
* Description: allow the user to choose the food type for each week
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: food type been chosen
***************************************************/
void Zoo::choose_type(){
	int a;
	cout << "Please choose the type for feed this week:\n1-Regular(The ordinary one, without any function)\n2-Premium(Cost twice as much as regular food, that's the best one, can reduce the probability of sickness by half\n3-Cheap(Cost half as muhc as regular, but can might double the probability of sickness." << endl;
	cin >> a;	
	set_type(a);
}

/***************************************************
* Function: week_food
* Description: to count the revenue for monkey while attendence increse
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: food type been chosen
***************************************************/
void Zoo::week_food(){
	float a = (((rand()%51) + 75)*0.01);
	set_food_price(a*food_price);
}

/***************************************************
* Function: adult_num
* Description: to count the adult number of animals
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: adult number been counted 
***************************************************/
void Zoo::adult_num(){
	if(m_num != 0){
		int a=m_num;
		for(int i=0; i<m_num; i++){
			if(monkey[i].get_is_baby() == 1){
				a--;
			}
		}
		set_a_m_num(a);
	}
	if(s_num != 0){
		int b=s_num;
		for(int i=0; i<s_num; i++){
			if(sea[i].get_is_baby() == 1){
				b--;
			}
		}
		set_a_s_num(b);
	}
	if(me_num != 0){
		int c=me_num;
		for(int i=0; i<me_num; i++){
			if(meerkat[i].get_is_baby() == 1){
				c--;
			}
		}
		set_a_me_num(c);
	}
}

/***************************************************
* Function: give_birth
* Description: to choose an animal give birth
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an animal give birth, array size increased 
***************************************************/
void Zoo::give_birth(){
	int y;
	do{
		y = 0;
		y = (rand()%3)+1;
	}while(((a_m_num == 0) && (y == 1)) || ((a_s_num ==0) && (y == 2))||((a_me_num == 0) && (y == 3)));
	if(y == 1 && a_m_num != 0){
		cout << "△A monkey is give a baby!" << endl;
		add_m();
	}
	else if(y == 2 && a_s_num != 0){
		cout << "△A sea otter is give 2 babies!" << endl;
		add_s();
		add_s();
	}
	else if(y == 3 && a_me_num != 0){
		cout << "△A meerkat is give 5 babies!" << endl;
		for(int i=1; i<=5;i++){
			add_me();
		}
	}
}

/***************************************************
* Function: be_sick
* Description: to choose an animal be sick
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an animal be sick 
***************************************************/
void Zoo::be_sick(){
	int x;
	do{
		x = (rand()%3) + 1;
	}while((x == 1 && m_num == 0) ||(x == 2 && s_num == 0)||(x == 3 && me_num == 0));		
	int a,b,c;
	if(x == 1 && m_num != 0){
		a = rand()%m_num;
		cout << "△The monkey " << a+1 << " is sick!" << endl;
		monkey[a].set_is_sick(1);
		lucky = a+1;
		cure_m();
	}
	else if(x == 2 && s_num != 0){
		b = rand()%s_num;
		cout << "△The sea otter " << b+1 << " is sick!" << endl;
		sea[b].set_is_sick(1);
		lucky = b+1;
		cure_s();
	}
	else if(x == 3 && me_num != 0){
		c = rand()%me_num;
		cout << "△The meerkat " << c+1 << " is sick!" << endl;
		meerkat[c].set_is_sick(1);
		lucky = c+1;
		cure_me();
	}
}

/***************************************************
* Function: cure_m
* Description: if a monkey is sick, test whether the user have enough money to cure it. If have, then it is be cured. Otherwise remove it from the monkey array.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: monkey die/be cured
***************************************************/
void Zoo::cure_m(){
	int x;
	if(monkey[lucky-1].get_is_baby() == 0){
		x = 0.5*monkey[lucky-1].get_m_cost();
	}
	else if(monkey[lucky-1].get_is_baby() == 1){
		x = monkey[lucky-1].get_m_cost();
	}
	if(x <= bank){
		cout << "△The monkey is cured!" << endl;
		monkey[lucky-1].set_is_sick(0);
		set_bank(bank - x);
	}
	else if(x > bank){
		cout << "△The monkey is die!" << endl;
		remove_m();
	}			
}

/***************************************************
* Function: cure_s
* Description: if a sea otter is sick, test whether the user have enough money to cure it. If have, then it is be cured. Otherwise remove it from the sea otter array.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: sea otter die/be cured
***************************************************/
void Zoo::cure_s(){
	int x;
	if(sea[lucky-1].get_is_baby() == 0){
		x = 0.5*sea[lucky-1].get_s_cost();
	}
	else if(sea[lucky-1].get_is_baby() == 1){
		x = sea[lucky-1].get_s_cost();
	}
	if(x <= bank){
		cout << "△The sea otter is cured!" << endl;
		sea[lucky-1].set_is_sick(0);
		set_bank(bank - x);
	}
	else if(x > bank){
		cout << "△The sea otter is die!" << endl;
		remove_s();
	}
}

/***************************************************
* Function: cure_me
* Description: if a meerkat is sick, test whether the user have enough money to cure it. If have, then it is be cured. Otherwise remove it from the meerkat array.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: meerkat die/be cured
***************************************************/
void Zoo::cure_me(){
	int x;
	if(meerkat[lucky-1].get_is_baby() == 0){
		x = 0.5*meerkat[lucky-1].get_me_cost();
	}
	else if(meerkat[lucky-1].get_is_baby() == 1){
		x = meerkat[lucky-1].get_me_cost();
	}
	if(x <= bank){
		cout << "△The meerkat is cured!" << endl;
		set_bank(bank - x);
		meerkat[lucky-1].set_is_sick(0);
	}
	else if(x > bank){
		cout << "△The meerkat is die!" << endl;
		remove_me();
	}
}

/***************************************************
* Function: remove_m
* Description: the user did not have enough money to cure the sick monkey, remove it from the monkey array.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: been remove
***************************************************/
void Zoo::remove_m(){
	Monkey *temp = new Monkey [m_num-1];		
	for(int i=0; i<lucky-1; i++){
		temp[i] = monkey[i];
	}
	for(int i=lucky; i<m_num; i++){
		temp[i-1] = monkey[i];
	}

	set_m_num(m_num-1);

	monkey = new Monkey [m_num];
	for(int i=0; i<m_num; i++){
		monkey[i] = temp[i];
	}
	delete [] temp;
}

/***************************************************
* Function: remove_s
* Description: the user did not have enough money to cure the sick sea otter, remove it from the sea otter array.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: been remove
***************************************************/
void Zoo::remove_s(){
	Sea *temp = new Sea [s_num-1];		
	for(int i=0; i<(lucky-m_num-1); i++){
		temp[i] = sea[i];
	}
	for(int i=(lucky-m_num); i<s_num; i++){
		temp[i-1] = sea[i];
	}
	
	set_s_num(s_num-1);

	sea = new Sea [s_num];
	for(int i=0; i<s_num; i++){
		sea[i] = temp[i];
	}
	delete [] temp;
}

/***************************************************
* Function: remove_me
* Description: the user did not have enough meerkat to cure the sick monkey, remove it from the meerkat array.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: been remove
***************************************************/
void Zoo::remove_me(){
	Meerkat *temp = new Meerkat [me_num-1];		
	for(int i=0; i<(lucky-m_num-s_num-1); i++){
		temp[i] = meerkat[i];
	}
	for(int i=(lucky-m_num-s_num); i<me_num; i++){
		temp[i-1] = meerkat[i];
	}
	
	set_me_num(me_num-1);
	meerkat = new Meerkat [me_num];
	for(int i=0; i<me_num; i++){
		meerkat[i] = temp[i];
	}
	delete [] temp;
}

/***************************************************
* Function: add_m
* Description: add a monkey to the array, and set it be a baby
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an baby monkey added
***************************************************/
void Zoo::add_m(){
	Monkey *temp = monkey;	
	set_m_num(m_num+1);
	monkey = new Monkey [m_num];
	for(int i=0; i<m_num-1; i++){
		monkey[i] = temp[i];
	}
	delete [] temp;

	monkey[m_num-1].set_m_cost(15000);
	monkey[m_num-1].set_m_baby_num(1);
	monkey[m_num-1].set_m_revenue(1500);
	monkey[m_num-1].set_is_sick(0);
	monkey[m_num-1].set_is_baby(1);
	monkey[m_num-1].set_age(0);
}

/***************************************************
* Function: buy_m
* Description: add a monkey to the array, and set it be an adult
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an adult monkey added
***************************************************/
void Zoo::buy_m(){
	Monkey *temp = monkey;		
	set_m_num(m_num+1);
	
	monkey = new Monkey [m_num];
	for(int i=0; i<m_num-1; i++){
		monkey[i] = temp[i];
	}
	delete [] temp;

	monkey[m_num-1].set_m_cost(15000);
	monkey[m_num-1].set_m_baby_num(1);
	monkey[m_num-1].set_m_revenue(1500);
	monkey[m_num-1].set_is_sick(0);
	monkey[m_num-1].set_is_baby(0);
	monkey[m_num-1].set_age(104);
}

/***************************************************
* Function: add_s
* Description: add a sea otter to the array, and set it be a baby
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an baby sea otter added
***************************************************/
void Zoo::add_s(){
	Sea *temp = sea;
		
	set_s_num(s_num+1);
	
	sea = new Sea [s_num];
	for(int i=0; i<s_num-1; i++){
		sea[i] = temp[i];
	}
	delete [] temp;
	
	sea[s_num-1].set_s_cost(5000);
	sea[s_num-1].set_s_baby_num(2);
	sea[s_num-1].set_s_revenue(250);
	sea[s_num-1].set_is_sick(0);
	sea[s_num-1].set_is_baby(1);
	sea[s_num-1].set_age(0);
}

/***************************************************
* Function: buy_s
* Description: add a sea otter to the array, and set it be an adult
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an adult sea otter added
***************************************************/
void Zoo::buy_s(){
	Sea *temp = sea;	
	set_s_num(s_num+1);
	
	sea = new Sea [s_num];
	for(int i=0; i<s_num-1; i++){
		sea[i] = temp[i];
	}
	delete [] temp;
	
	sea[s_num-1].set_s_cost(5000);
	sea[s_num-1].set_s_baby_num(2);
	sea[s_num-1].set_s_revenue(250);
	sea[s_num-1].set_is_sick(0);
	sea[s_num-1].set_is_baby(0);
	sea[s_num-1].set_age(104);
}

/***************************************************
* Function: add_me
* Description: add a meerkat to the array, and set it be a baby
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an baby meerkat added
***************************************************/
void Zoo::add_me(){
	Meerkat *temp = meerkat;	
	set_me_num(me_num+1);
	meerkat = new Meerkat [me_num];
	
	for(int i=0;i<me_num-1;i++){
		meerkat[i] = temp[i];
	}	
	delete [] temp;
	
	meerkat[me_num-1].set_me_cost(500);
	meerkat[me_num-1].set_me_baby_num(5);
	meerkat[me_num-1].set_me_revenue(25);
	meerkat[me_num-1].set_is_sick(0);
	meerkat[me_num-1].set_is_baby(1);
	meerkat[me_num-1].set_age(0);
}

/***************************************************
* Function: buy_me
* Description: add a meerkat to the array, and set it be an adult
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: an adult meerkat added
***************************************************/
void Zoo::buy_me(){
	Meerkat *temp = meerkat;

	set_me_num(me_num+1);
	meerkat = new Meerkat [me_num];	
	for(int i=0;i<me_num-1;i++){
		meerkat[i] = temp[i];
	}	
	delete [] temp;

	meerkat[me_num-1].set_me_cost(500);
	meerkat[me_num-1].set_me_baby_num(5);
	meerkat[me_num-1].set_me_revenue(25);
	meerkat[me_num-1].set_is_sick(0);
	meerkat[me_num-1].set_is_baby(0);
	meerkat[me_num-1].set_age(104);
}

/***************************************************
* Function: create
* Description: create moneky array, sea otter array and meerkat array for week one. Allow the user to choose food type and set the food price.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: arrays created, food type and price set. 
***************************************************/
void Zoo::create(){
	create_m();
	create_s();
	create_me();
	choose_type();
	set_food_price(food_price);
}

/***************************************************
* Function: create2
* Description: create moneky array, sea otter array and meerkat array for other weeks. Allow the user to choose food type and set the food price.
* Parameters: 3 integer numbers
* Return value: none
* Precondition: none 
* Postcondition: arrays created, food type and price set. 
***************************************************/
void Zoo::create2(const int &a1, const int &a2, const int &a3){
	if (a1 == 1 || a1 == 2){
		if(a1 == 1){
			buy_m();
		}
		else if(a1 == 2){
			buy_m();
			buy_m();
		}
	}
	else if(a2 == 1 || a2 == 2){
		if(a2 == 1){
			buy_s();
		}
		else if(a2 == 2){
			buy_s();
			buy_s();
		}
	}
	else if(a3 == 1 || a3 == 2){
		if(a3 == 1){
			buy_me();
		}
		else if(a3 == 2){
			buy_me();
			buy_me();
		}
	}
	choose_type();
	set_food_price(food_price);
}

/***************************************************
* Function: instruction1
* Description: the instruction for week one
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: finish week one
***************************************************/
void Zoo::instruction1(){
	initial();	
	int x = 1;
	while(bank >0 && x == 1){
		cout << "（づ￣3￣）づWeek:" << x  << endl;
		int a,b,c,d;
		buy_animal1(b,c,d);
		if(bank <= 0){
			cout << "Run out of money!" << endl;
			break;
		}
		create();
		if (type == 1){
			cout << "·The Base food price for this week for type " << type << " is: " << food_price << endl;
			bank = bank - ((food_price*4*m_num)+(food_price*2*s_num)+(food_price*me_num));
			if(bank <= 0){
				cout << "Run out of money!" << endl;
				break;
			}
			week_1();
		}	
		else if(type == 2){
			food_price = food_price*2.0;
			cout << "·The Base food price for this week for type " << type << " is: " << food_price << endl;
			bank = bank - ((food_price*4*m_num)+(food_price*2*s_num)+(food_price*me_num));
			if(bank <= 0){
				cout << "Run out of money!" << endl;
				break;
			}
			week_2();
		}
		else{
			food_price = food_price/2.0;
			cout << "·The Base food price for this week for type " << type << " is: " << food_price << endl;
			bank = bank - ((food_price*4*m_num)+(food_price*2*s_num)+(food_price*me_num));
			if(bank <= 0){
				cout << "Run out of money!" << endl;
				break;
			}
			week_3();
		}
		x++;
		increase_age();
	}
}

/***************************************************
* Function: instruction
* Description: the instruction for other weeks
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: finish other weeks
***************************************************/
void Zoo::instruction2(){
	int x = 2;
	while(bank > 0){
		cout << "（づ￣3￣）づWeek:" << x << endl;
		int a,b,c,d;
		buy_animal(b,c,d);
		if(bank <= 0){
			cout << "Run out of money!" << endl;
			break;
		}
		if(m_num != 0 || s_num != 0 || me_num != 0){
			create2(b,c,d);
			if (type == 1){
				week_food();
				cout << "·The Base food price for this week for type " << type << " is: " << food_price << endl;
				bank = bank - ((food_price*4*m_num)+(food_price*2*s_num)+(food_price*me_num));
				if(bank <= 0){
					cout << "Run out of money!" << endl;
					break;
				}
				week_1();
			}	
			else if(type == 2){
				week_food();
				food_price = food_price*2.00;
				cout << "·The Base food price for this week for type " << type << " is: " << food_price << endl;
				bank = bank - ((food_price*4*m_num)+(food_price*2*s_num)+(food_price*me_num));
				if(bank <= 0){
					cout << "Run out of money!" << endl;
					break;
				}
				week_2();
			}
			else if(type == 3){
				week_food();
				food_price = food_price/2.00;
				cout << "·The Base food price for this week for type " << type << " is: " << food_price << endl;
				bank = bank - ((food_price*4*m_num)+(food_price*2*s_num)+(food_price*me_num));
				if(bank <= 0){
					cout << "Run out of money!" << endl;
					break;
				}
				week_3();
			}
		}
		x++;
		increase_age();
	}
}

/***************************************************
* Function: week_1
* Description: for the user choose food type one, count the rate of each event.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: event happen
***************************************************/
void Zoo::week_1(){
	int a = (rand()%4) + 1;
	if (a == 1){
		be_sick();
		earn();
	}
	else if(a == 2){
		adult_num();
		give_birth();
		earn();
	}
	else if(a == 3){
		cout << "△A boom in zoo attendence occurs. Each monkey generates a random amount of revenue between $300 - $700." << endl;
		earn1();
	}
	else{
		cout << "△No special event occurs during this week." << endl;
		earn();
	}
}

/***************************************************
* Function: week_2
* Description: for the user choose food type two, count the rate of each event.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: event happen
***************************************************/
void Zoo::week_2(){
	int a = (rand()%8) + 1;
	if (a == 1){
		be_sick();
		earn();
	}
	else if(a == 2 || a == 3){
		adult_num();
		give_birth();
		earn();
	}
	else if(a == 4 || a == 5){
		cout << "△A boom in zoo attendence occurs. Each monkey generates a random amount of revenue between $300 - $700." << endl;
		earn1();
	}
	else if(a == 6|| a == 7 || a == 8){
		cout << "△No special event occurs during this week." << endl;
		earn();
	}	
}

/***************************************************
* Function: week_3
* Description: for the user choose food type three, count the rate of each event.
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: event happen
***************************************************/
void Zoo::week_3(){
	int a = (rand()%6) + 1;
	if (a == 1|| a == 2 || a == 3){
		be_sick();
		earn();
	}
	else if(a == 4){
		adult_num();
		give_birth();
		earn();
	}
	else if(a == 5){
		cout << "△A boom in zoo attendence occurs. Each monkey generates a random amount of revenue between $300 - $700." << endl;
		earn1();
	}
	else if(a == 6){
		cout << "△No special event occurs during this week." << endl;
		earn();
	}
}

/***************************************************
* Function: earn1
* Description: count the revenue if this week's special event is attendence increase
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: revenue counted
***************************************************/
void Zoo::earn1(){
	int r,a,b,c;
	r = 0;
	a = 0;
	b = 0;
	c = 0;
	for(int i=0; i<m_num; i++){
		if(monkey[i].get_is_baby() == 1){
			b++;
		}
	}
	r += (3000+(rand()%400)+300)*b;	
	for(int i=0;i<m_num-b;i++){
		int x = (rand()%400) + 300;
		r += (1500 + x);
	}
	for(int i=0;i<s_num;i++){
		if(sea[i].get_is_baby() == 1){
			a++;
		}
	}
	r += 500*a+250*(s_num-a);
	for(int i=0;i<me_num;i++){
		if(meerkat[i].get_is_baby() == 1){
			c++;
		}
	}
	r += 50*c+25*(me_num-c);
	set_bank(bank+r);
	cout << "☆After adding your revenue this week, your current bank balance is: " << bank << endl;
}

/***************************************************
* Function: earn
* Description: count the revenue for this week
* Parameters: none
* Return value: none
* Precondition: none 
* Postcondition: revenue counted
***************************************************/
void Zoo::earn(){
	int r,a,b,c;
	r = 0;
	a = 0;
	b = 0;
	c = 0;
	for(int i=0; i<m_num; i++){
		if(monkey[i].get_is_baby() == 1){
			b++;
		}
	}
	r += 3000*b+1500*(m_num-b);
	for(int i=0;i<s_num;i++){
		if(sea[i].get_is_baby() == 1){
			a++;
		}
	}
	r += 500*a+250*(s_num-a);
	for(int i=0;i<me_num;i++){
		if(meerkat[i].get_is_baby() == 1){
			c++;
		}
	}
	r += 50*c+25*(me_num-c);	
	set_bank(bank+r);
	cout << "☆After adding your revenue this week, your current bank balance is: " << bank << endl;
}

