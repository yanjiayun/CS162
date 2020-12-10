/******************************************************
** Program: program.cpp
** Author: Jiayun Yan
** Date: 04/14/2019
** Description: This is the drive.cpp, contain main function 
** Input: 2 command line, and all the required instruction
** Output: The information that had been sorted.
******************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include "assignment1.h"

using namespace std;

int main(int argc, char *argv[]){	
	ifstream file1,file2;
	ofstream file3;
	int a,num,n,c,d,g,y,z;
	string b;
	char h[1000];
	file1.open(argv[1]);
	file2.open(argv[2]);						
	
	if ((file1.is_open()) && (file2.is_open())){
		file1 >> num;	
		file2 >> n;
		wizard *array = new wizard [num];
		spellbook *arr = new spellbook [n];
		spell *sp = new spell [100];
		
		login(a,b);	
		create_array(file1,num,array);
		get_spellbook_data(arr,n,file2,sp,y);
		check_info(num,a,b,array,c,d,z,arr,n,y,sp,h,file3);		
		check_info1(num,a,b,array,c,d,z,n,arr,y,sp,h,file3);		
				
		delete [] array;
		delete [] arr;
		delete [] sp;
		}
	else {
		cout << "File not exist" << endl;
	}

	return 0;
}
