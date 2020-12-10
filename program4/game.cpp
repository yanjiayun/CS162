/******************************************************
** Program: game.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the game class 
** Input: All the enter as required 
** Output: The result of the game, the 4 by 4 grid.
******************************************************/
#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<cstring>
#include<ctime>
#include<stdio.h>
#include<ncurses.h>

#include"game.h"
#include"room.h"
#include"event.h"
#include"wumpus.h"
#include"bats.h"
#include"pit.h"
#include"gold.h"

using namespace std;

/***************************************************
* Function: Constructor
* Description: constructor for game class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Game::Game(int size){
	this->size = size;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			row.push_back(a);
		}
		cave.push_back(row);
	}
}

/***************************************************
* Function: set_num
* Description: Setter/Accessors: arrow number
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_num(int new_num){
	num = new_num;
}

/***************************************************
* Function: get_num
* Description: Getter/Mutators: arrow number
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Game::get_num()const{
	return num;
}

/***************************************************
* Function: set_fx
* Description: Setter/Accessors: the first x (the x location of escape rope)
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_fx(int new_fx){
	fx = new_fx;
}

/***************************************************
* Function: get_fx
* Description: Getter/Mutators: the first x (the x location of escape rope)
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Game::get_fx()const{
	return fx;
}

/***************************************************
* Function: set_fy
* Description: Setter/Accessors: the first y (the y location of escape rope)
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_fy(int new_fy){
	fy = new_fy;
}

/***************************************************
* Function: get_fy
* Description: Getter/Mutators: the first y (the y location of escape rope)
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Game::get_fy()const{
	return fy;
}

/***************************************************
* Function: set_if_wake
* Description: Setter/Accessors: if the wumpus awake or not
* Parameters: an bool
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_if_wake(bool new_if_wake){
	if_wake = new_if_wake;
}

/***************************************************
* Function: get_if_wake
* Description: Getter/Mutators: if the wumpus awake or not
* Parameters: a bool
* Return value: a bool
* Precondition: none
* Postcondition: none
***************************************************/
bool Game::get_if_wake()const{
	return if_wake;
}

/***************************************************
* Function: set_if_alive
* Description: Setter/Accessors: if the wumpus alive or not
* Parameters: a bool
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_if_alive(bool new_if_alive){
	if_alive = new_if_alive;
}

/***************************************************
* Function: get_if_alive
* Description: Getter/Mutators: if the wumpus alive or not
* Parameters: a bool
* Return value: a bool
* Precondition: none
* Postcondition: none
***************************************************/
bool Game::get_if_alive()const{
	return if_alive;
}

/***************************************************
* Function: set_p_live
* Description: Setter/Accessors: if the player alive or not
* Parameters: a bool
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_p_live(bool new_p_live){
	p_live = new_p_live;
}

/***************************************************
* Function: get_p_live
* Description: Getter/Mutators: if the player alive or not
* Parameters: a bool
* Return value: a bool
* Precondition: none
* Postcondition: none
***************************************************/
bool Game::get_p_live()const{
	return p_live;
}

/***************************************************
* Function: set_g_pick
* Description: Setter/Accessors: if the gold picked or not
* Parameters: a bool
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_g_pick(bool new_g_pick){
	g_pick = new_g_pick;
}

/***************************************************
* Function: get_g_pick
* Description: Getter/Mutators: if the gold picked or not
* Parameters: a bool
* Return value: a bool
* Precondition: none
* Postcondition: none
***************************************************/
bool Game::get_g_pick()const{
	return g_pick;
}

/***************************************************
* Function: set_xx
* Description: Setter/Accessors: the x location of player
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_xx(int new_xx){
	xx = new_xx;
}

/***************************************************
* Function: get_xx
* Description: Getter/Mutators: the x location of player
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Game::get_xx()const{
	return xx;
}

/***************************************************
* Function: set_yy
* Description: Setter/Accessors: the y location of player
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_yy(int new_yy){
	yy = new_yy;
}

/***************************************************
* Function: get_yy
* Description: Getter/Mutators: the y location of player
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Game::get_yy()const{
	return yy;
}

/***************************************************
* Function: set_size
* Description: Setter/Accessors: the size of the cave 
* Parameters: an integer number
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
void Game::set_size(int new_size){
	size = new_size;
}

/***************************************************
* Function: get_size
* Description: Getter/Mutators: the size of the cave 
* Parameters: an integer number
* Return value: an integer number
* Precondition: none
* Postcondition: none
***************************************************/
int Game::get_size()const{
	return size;
}

/***************************************************
* Function: print
* Description: print the cave
* Parameters: an integer
* Return value: none
* Precondition: the command line need to be correct
* Postcondition: the cave printed
***************************************************/
void Game::print(const int &size){
	for(int i=0; i<=size; i++){
		for(int j=0; j<=size; j++){
			if(j != size){
				cout << "+---";
			}
			else{
				cout << "+";
			}
		}
		cout << endl;
		if(i != size){
			for(int k = 0; k<=size; k++){
				cout << "|   " ;        
			}
			cout << endl;
			for(int k = 0; k<=size; k++){
				cout << "|   " ;        
			}
			cout << endl;
			for(int k = 0; k<=size; k++){
				if (i == yy && k == xx){
					cout << "| * " ;       
				}
				else{
					cout << "|   " ;       
				}
			}
			cout << endl;
		}
	}
}

/***************************************************
* Function: print_d
* Description: print the cave with debug mode
* Parameters: an integer
* Return value: none
* Precondition: the command line need to be correct
* Postcondition: the cave printed
***************************************************/
void Game::print_d(const int &size){
	for(int i=0; i<=size; i++){
		for(int j=0; j<=size; j++){
			if(j != size){
				cout << "+---";
			}
			else{
				cout << "+";
			}
		}
		cout << endl;
		if(i != size){
			for(int k = 0; k<=size; k++){
				if(cave[i][k].get_event() != 0){
					cout << "|" << cave[i][k].get_event()->get_name() << "  ";   
				}
				else{
					cout << "|   " ;        
				}
			}
			cout << endl;
			for(int k = 0; k<=size; k++){
				cout << "|   " ;        
			}
			cout << endl;
			for(int k = 0; k<=size; k++){
				if (i == yy && k == xx){
					cout << "| * " ;       
				}
				else{
					cout << "|   " ;       
				}
			}
			cout << endl;
		}
	}
}

/***************************************************
* Function: set_wumpus
* Description: set the location of wumpus
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the location of wumpus set
***************************************************/
void Game::set_wumpus(){
	int times = 0;
	int x, y;
	do{
		x = rand()%size;
		y = rand()%size;
		if(cave[x][y].get_event() == 0){ //if it is an empty cave
			cave[x][y].set_event(new Wumpus("W"));
			times++;
		}
	}while(times<1); //1 room contain wumpus
}

/***************************************************
* Function: set_bats
* Description: set the location of bats
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the location of bats set
***************************************************/
void Game::set_bats(){
	int times = 0;
	int x, y;
	do{
		x = rand()%size;
		y = rand()%size;
		if(cave[x][y].get_event() == 0){         //if it is an empty cave
			cave[x][y].set_event(new Bats("B"));
			times++;
		}
	}while(times<2); //2 rooms contain bats
}

/***************************************************
* Function: set_pit
* Description: set the location of pit
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the location of pit set
***************************************************/
void Game::set_pit(){
	int times = 0;
	int x, y;
	do{
		x = rand()%size;
		y = rand()%size; 
		if(cave[x][y].get_event() == 0){       //if it is an empty cave
			cave[x][y].set_event(new Pit("P"));
			times++;
		}
	}while(times<2); //2 rooms contain pit
}

/***************************************************
* Function: set_gold
* Description: set the location of gold
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the location of gold set
***************************************************/
void Game::set_gold(){
	int times = 0;
	int x, y;
	do{
		x = rand()%size;
		y = rand()%size;
		if(cave[x][y].get_event() == 0){              //if it is an empty cave
			cave[x][y].set_event(new Gold("G"));
			times++;
		}
	}while(times<1); //1 room contain gold
}

/***************************************************
* Function: set_player
* Description: set the location of player
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the location of player set
***************************************************/
void Game::set_player(){
	int times = 0;
	int x, y;
	do{
		x = rand()%size;
		y = rand()%size;
		if(cave[x][y].get_event() == 0){                //if it is an empty cave
			xx = y;
			yy = x;
			times++;
		}
	}while(times<1);
	fx = y;
	fy = x;
}

/***************************************************
* Function: kill
* Description: allow user to fire arrows and kill the wumpus
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the arrow fired
***************************************************/
void Game::kill(){
	char b;
	cin >> b;
	if(b == 'w'){
		for(int i=0; i<yy; i++){
			if ((cave[i][xx].get_event() != 0) && (cave[i][xx].get_event()->get_name() == "W")){    //if the upper rooms contain wumpus
				cout << "Wumpus killed" << endl;
				if_alive = false;        //kill wumpus
				break;
			}
			else{
				if_wake == true;         //wake wumpus
			}
		}
	}
	else if(b == 's'){
		for(int i=yy+1; i<size; i++){
			if ((cave[i][xx].get_event() != 0) && (cave[i][xx].get_event()->get_name() == "W")){     //if the lower rooms contain wumpus
				cout << "Wumpus killed" << endl;
				if_alive = false;      //kill wumpus
				break;
			}
			else{
				if_wake == true;           //wake wumpus
			}
		}
	}
	else if(b == 'a'){
		for(int i=0; i<xx; i++){
			if ((cave[yy][i].get_event() != 0 && cave[yy][i].get_event()->get_name() == "W")){      //if the left rooms contain wumpus
				cout << "Wumpus killed" << endl;
				if_alive = false;                //kill wumpus
				break; 
			}
			else{
				if_wake == true;             //wake wumpus
			}
		}
	}
	else if(b == 'd'){
		for(int i=xx+1; i<size; i++){
			if ((cave[yy][i].get_event() !=0 && cave[yy][i].get_event()->get_name() == "W")){      //if the right rooms contain wumpus
				cout << "Wumpus killed" << endl;
				if_alive = false;           //kill wumpus
				break;
			}
			else{
				if_wake == true;            //wake wumpus
			}
		}
	}
	num--;         //only allow 3 arrows
}

/***************************************************
* Function: move_d
* Description: move the user with debug mode
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: user moved
***************************************************/
void Game::move_d(){
	system("stty -echo");          //for the extre credit, move user without pressing enter
	system("stty raw");            //for the extre credit, move user without pressing enter
	char a;                        //for the extre credit, move user without pressing enter  
	while(1){                      //for the extre credit, move user without pressing enter  
		a = getchar();
		if(a == 's' && yy+1<=size-1){
			cout << endl;
			yy = yy+1;
			break;                          //break the while loop
		}
		else if(a == 'w' && yy-1>=0){
			cout << endl;
			yy = yy-1;
			break;                          //break the while loop
		}
		else if(a == 'a' && xx-1 >=0){
			cout << endl;
			xx = xx-1;
			break;                          //break the while loop
		}
		else if(a == 'd' && xx+1 <=size-1){
			cout << endl;
			xx = xx+1;
			break;             //break the while loop
		}
		else if(a == ' '){
			if(num <= 0){
				cout << "No arrows availbale!" << endl;
			}
			else if(num > 0){
				system("stty echo");     //for the extre credit, move user without pressing enter
				system("stty cooked");   //for the extre credit, move user without pressing enter
				kill();
				system("stty -echo");    //for the extre credit, move user without pressing enter
				system("stty raw");      //for the extre credit, move user without pressing enter
			}
			break;                      //break the while loop
		}
	}
	system("stty echo");           //for the extre credit, move user without pressing enter
	system("stty cooked");        //for the extre credit, move user without pressing enter
	print_d(size);
}

/***************************************************
* Function: move
* Description: move the user
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: user moved
***************************************************/
void Game::move(){
	system("stty -echo");         //for the extre credit, move user without pressing enter
	system("stty raw");           //for the extre credit, move user without pressing enter
	char a;
	while(1){                     //for the extre credit, move user without pressing enter
		a = getchar();              //for the extre credit, move user without pressing enter
		if(a == 's' && yy+1<=size-1){
			cout << endl;
			yy = yy+1;
			break;                              //break the while loop
		}
		else if(a == 'w' && yy-1>=0){
			cout << endl;
			yy = yy-1;
			break;                        //break the while loop
		}
		else if(a == 'a' && xx-1 >=0){
			cout << endl;
			xx = xx-1;
			break;                      //break the while loop
		}
		else if(a == 'd' && xx+1 <=size-1){
			cout << endl;
			xx = xx+1;
			break;                               //break the while loop
		}
		else if(a == ' '){
			if(num <= 0){
				cout << "No arrows availbale!" << endl;
			}
			else if(num > 0){
				system("stty echo");                //for the extre credit, move user without pressing enter
				system("stty cooked");              //for the extre credit, move user without pressing enter
				kill();
				system("stty -echo");               //for the extre credit, move user without pressing enter
				system("stty raw");                 //for the extre credit, move user without pressing enter
			}
			break;                           //break the while loop
		}
	}
	system("stty echo");                      //for the extre credit, move user without pressing enter   
	system("stty cooked");                    //for the extre credit, move user without pressing enter
	print(size);
}

/***************************************************
* Function: check_d
* Description: check the situation with debug mode
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: check complete
***************************************************/
void Game::check_d(){
	for(int x=0; x<size; x++){
		for(int y=0; y<size; y++){
			if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "P"){   //the user located in the pit room
				if( x == yy && y == xx){
					cout << "You fall in the bottomless pit and die!" << endl;
					p_live = false;        //user die
				}
			}  
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "B"){  //the user located in the bats room
				if( x == yy && y == xx){
					cout << "The angry bast grab you to another room!" << endl;
					set_player();       //move the user to another room
					print_d(size);      
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "W"){   //the user located in the wumpus room
				if((x == yy && y == xx)&&(if_alive == true)){ //if the wumpus not die, it can kill the user
					cout << "The Wumpus eat you!" << endl;
					p_live = false;        //user die
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "G"){    //the user located in the gold room
				if(x == yy && y == xx){
					cout << "You pick the gold up!" << endl;
					g_pick = true;        //gold picked
				}
			}
		}
	}
}

/***************************************************
* Function: check
* Description: check the situation 
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: check complete
***************************************************/
void Game::check(){
	for(int x=0; x<size; x++){
		for(int y=0; y<size; y++){
			if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "P"){    //the user located in the pit room
				if( x == yy && y == xx){
					cout << "You fall in the bottomless pit and die!" << endl;
					p_live = false;       //user die
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "B"){   //the user located in the bats room
				if( x == yy && y == xx){
					cout << "The angry bast grab you to another room!" << endl;
					set_player();        //move the user to another room
					print(size);
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "W"){      //the user located in the wumpus room
				if((x == yy && y == xx)&&(if_alive == true)){ //if the wumpus not die, it can kill the user
					cout << "The Wumpus eat you!" << endl;
					p_live = false;        //user die
				} 
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "G"){      //the user located in the gold room
				if(x == yy && y == xx){
					cout << "You pick the gold up!" << endl;
					g_pick = true;          //gold picked
				}
			}
		}
	}
}

/***************************************************
* Function: percepts
* Description: print percepts
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: percepts printed
***************************************************/
void Game::percepts(){
	for(int x=0; x<size; x++){
		for(int y=0; y<size; y++){
			if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "P"){
				//the user located in the pit room
				if((x == yy-1 && y == xx) || (x == yy+1 && y == xx) || (x == yy && y == xx-1) || (x == yy && y == xx+1)){
					cout << "You feel a breeze." << endl;
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "B"){      
				//the user located in the bats room
				if((x == yy-1 && y == xx) || (x == yy+1 && y == xx) || (x == yy && y == xx-1) || (x == yy && y == xx+1)){
					cout << "You hear wings flapping." << endl;
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "W"){ 
				//the user located in the wumpus room
				if((x == yy-1 && y == xx) || (x == yy+1 && y == xx) || (x == yy && y == xx-1) || (x == yy && y == xx+1)){
					cout << "You smell a terrible stench." << endl;
				}
			}
			else if(cave[x][y].get_event() != 0 && cave[x][y].get_event()->get_name() == "G"){ 
				//the user located in the gold room
				if((x == yy-1 && y == xx) || (x == yy+1 && y == xx) || (x == yy && y == xx-1) || (x == yy && y == xx+1)){
					cout << "You see a glimmer nearby." << endl;
				}
			}
		}
	}
}

/***************************************************
* Function: set_all
* Description: set all the location
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: the location be set
***************************************************/
void Game::set_all(){
	num = 3;
	g_pick = false;
	p_live = true;
	if_alive = true;
	set_wumpus();
	set_bats();
	set_pit();
	set_gold();
	set_player();
}

/***************************************************
* Function: play_d
* Description: play with debug mode
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: game played
***************************************************/
void Game::play_d(){
	for(int i=1; i>0; i++){
		move_d();
		check_d();
		if(p_live == false){
			cout << "You lost!" << endl;
			break;
		}
		else if((g_pick == true && (xx == fx && yy == fy))){
			cout << "You win!" << endl;
			break;
		}
		percepts();
	}
}

/***************************************************
* Function: play
* Description: play the game
* Parameters: none
* Return value: none
* Precondition: cave need to be bulit
* Postcondition: game played
***************************************************/
void Game::play(){
	for(int i=1; i>0; i++){
		move();
		check();
		if(p_live == false){
			cout << "You lost!" << endl;
			break;
		}
		else if((g_pick == true && (xx == fx && yy == fy))){
			cout << "You win!" << endl;
			break;
		}
		percepts();
	}
}
