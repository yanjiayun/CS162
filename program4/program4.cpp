/******************************************************
** Program: program4.cpp
** Author: Jiayun Yan
** Date: 05/26/2019
** Description: This is the drive.cpp, contain main function 
** Input: All the enter as required 
** Output: The result of the game, the 4 by 4 grid.
******************************************************/

#include<iostream>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<ctime>

#include"event.h"
#include"game.h"
#include"room.h"

using namespace std;

int main (int argc, char *argv[]){
	srand(time(NULL));
	if(argc != 3){
		cout << "Incorrcet number of arguments" << endl;
		return 0;
	}
	int a = atoi(argv[1]);
	if(a<4){
		do{
			cout << "Error! Please enter an integer equal or greater than 4 : ";			
			cin >> a;
		}while(a < 4);
	}
	else if (a >= 4 && strcmp(argv[2],"false") == 0){
		Game g(a);
		g.set_all();
		g.print(a);
		g.play();
}
	else if(a >= 4 && strcmp(argv[2],"true") == 0){
		Game g(a);
		g.set_all();
		g.print_d(a);
		g.play_d();
	}

	return 0;
}
