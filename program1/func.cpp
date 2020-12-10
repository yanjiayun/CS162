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


/***************************************************
* Function: check_int
* Description: check whether the id is int or not 
* Parameters: A string 
* Return value: bool
* Precondition: none
* Postcondition: id are ints
***************************************************/
bool check_int(string x){       
	bool check = true;
	for(int i=0; i<x.size(); i++){  //all the single char of the string 
		if (x.at(i) < 48 || x.at(i) > 57){  //only contain numbers
			cout << "Error! Please enter again: " ;
			return false;
		}
	}
	return check;
}

/***************************************************
* Function: login
* Description: let users enter id and password 
* Parameters: none 
* Return value: none
* Precondition: id should be entered
* Postcondition: id are ints
***************************************************/
void login(int &a,string &b){
	string a1; //avoid bad input
	bool check;
	cout << "Please enter your ID number: " << endl;
	
	do{
		getline(cin,a1);
		check = check_int(a1);
	}while(check == false);    //To get the vaild ID number
	
	a = atoi(a1.c_str());  //change string a1 to integer number a

	cout << "Please enter your password: " << endl;
	getline(cin,b);  //This a string 
} 

/***************************************************
* Function: create_array
* Description: create array on heap 
* Parameters: none 
* Return value: none
* Precondition: file should be opened 
* Postcondition: array on heap
***************************************************/
void create_array (ifstream &file1, int &num, wizard *array){
	for(int i=0; i<num; i++){
		array[i].student = 0;
	}
	for(int i=0; i<num; i++){   //the array for spellbook
		file1 >> array[i].name;
		file1 >> array[i].id;
		file1 >> array[i].username;
		file1 >> array[i].title;
		if(array[i].title.at(0) == 'S'){   //To idetify the student status
			array[i].student = 1;  
		}
		file1 >> array[i].length;
	}
}

/***************************************************
* Function: sort
* Description: print some insturctions 
* Parameters: int and array
* Return value: none
* Precondition: none 
* Postcondition: x should be enter 
***************************************************/
void sort (wizard *array,int &x){
	cout << "\nWhich options would you like to choose?" << endl;
	cout << "1: Sort spellbooks by number of pages." << endl;
	cout << "2: Sort spellbooks by effect." << endl;
	cout << "3: Sort spellbooks by average success rate." << endl;
	cout << "4: Quit" << endl;
	cout << "Enter your choose: " ;
	cin >> x;
}

/***************************************************
* Function: sort1
* Description: sort spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort1(spellbook *arr,int n){
	for(int i=0; i<n-1; i++){     //bubble sort
		for(int j=0; j<n-1-i; j++){   //To not need to check i becasue we already finished that 
			if(arr[j].pages > arr[j+1].pages){
				spellbook temp = arr[j];    //Use the temp to store the information
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

/***************************************************
* Function: sort_1
* Description: sort spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort_1(spellbook *arr,int n){
	for(int i=0; i<n-1; i++){ //bubble sort
		for(int j=0; j<n-1-i; j++){//To not need to check i becasue we already finished that
			if(arr[j].pages > arr[j+1].pages){
				spellbook temp = arr[j];//Use the temp to store the information
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(arr[i].allow == 1){
			arr[i].t1 = ""; //If the user is student, hide all the death and poison information
		}
	}
}

/***************************************************
* Function: sort2
* Description: sort spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort2(spell *sp, int y){
	for(int i=0; i<y-1; i++){//bubble sort
		for(int j=0; j<y-1-i; j++){//To not need to check i becasue we already finished that
			if(sp[j].effect.at(0) > sp[j+1].effect.at(0)){
				spell temp = sp[j];
				sp[j] = sp[j+1];
				sp[j+1] = temp;					
			}
		}
	}
}

/***************************************************
* Function: sort_2
* Description: sort spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort_2(spell *sp, int y){
	for(int i=0; i<y-1; i++){//bubble sort
		for(int j=0; j<y-1-i; j++){//To not need to check i becasue we already finished that
			if(sp[j].effect.at(0) > sp[j+1].effect.at(0)){
				spell temp = sp[j];//Use the temp to store the information
				sp[j] = sp[j+1];
				sp[j+1] = temp;					
			}
		}
	}
	for(int i=0; i<y; i++){
		if(sp[i].effect.at(0) == 'd'||sp[i].effect.at(0) == 'p'){
			sp[i].effect = sp[i].title2 = "";//If the user is student, hide all the death and poison information
		} 
	}
}

/***************************************************
* Function: sort3
* Description: sort spellbooks with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort3(spellbook *arr, int n){
	for(int i=0; i<n-1; i++){//bubble sort
		for(int j=0; j<n-1-i; j++){//To not need to check i becasue we already finished that
			if(arr[j].rate > arr[j+1].rate){
				spellbook temp = arr[j];//Use the temp to store the information
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

/***************************************************
* Function: sort_3
* Description: sort spellbooks with spellbooks with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort_3(spellbook *arr, int n){
	for(int i=0; i<n-1; i++){//bubble sort
		for(int j=0; j<n-1-i; j++){//To not need to check i becasue we already finished that
			if(arr[j].rate > arr[j+1].rate){
				spellbook temp = arr[j];//Use the temp to store the information
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(arr[i].allow == 1){//If the user is student, hide all the death and poison information
			arr[i].t1 = "";
		}
	}
}

/***************************************************
* Function: print1
* Description: to print out the sorted spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print1 (spellbook *arr,int n){
	sort1(arr,n);
	for(int i=0; i<n; i++){
		cout << arr[i].t1 << " " << arr[i].pages << endl; //print the sorted information
	}
}

/***************************************************
* Function: print_1
* Description: to print out the sorted spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print_1 (spellbook *arr,int n){
	sort_1(arr,n);
	for(int i=0; i<n; i++){
		if(arr[i].t1 != ""){//If the user is student, hide all the death and poison information
			cout << arr[i].t1 << " " << arr[i].pages << endl;
		}
	}
}

/***************************************************
* Function: print2
* Description: to print out the sorted spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print2 (spell *sp,int y){
	sort2(sp,y);
	for(int i=0; i<y; i++){
		cout << sp[i].effect << " " << sp[i].title2 << endl;//print the sorted information
	}
}

/***************************************************
* Function: print_2
* Description: to print out the sorted spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print_2 (spell *sp,int y){
	sort_2(sp,y);
	for(int i=0; i<y; i++){
		if(sp[i].effect != ""){//If the user is student, hide all the death and poison information
			cout << sp[i].effect << " " << sp[i].title2 << endl;
		}
	}
}

/***************************************************
* Function: print3
* Description: to print out the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print3 (spellbook *arr,int n){
	sort3(arr,n);
	for(int i=0; i<n; i++){
		cout << arr[i].t1 << " " << arr[i].rate << endl;//print the sorted information
	}
}

/***************************************************
* Function: print_3
* Description: to print out the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print_3 (spellbook *arr,int n){
	sort_3(arr,n);
	for(int i=0; i<n; i++){
		if(arr[i].t1 != ""){//If the user is student, hide all the death and poison information
			cout << arr[i].t1 << " " << arr[i].rate << endl;
		}
	}
}

/***************************************************
* Function: write1
* Description: to write the sorted spellbook with number of pages
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write1(spellbook *arr,int n,ofstream &file3){
	sort1(arr,n);
	for(int i=0; i<n; i++){
		file3 << arr[i].t1 << " " << arr[i].pages << endl;//write the sorted information
	}
	file3.close();
}

/***************************************************
* Function: write_1
* Description: to write the sorted spellbook with number of pages
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write_1(spellbook *arr,int n,ofstream &file3){
	sort_1(arr,n);
	for(int i=0; i<n; i++){
		if(arr[i].t1 != ""){//If the user is student, hide all the death and poison information
			file3 << arr[i].t1 << " " << arr[i].pages << endl;
		}
	}
	file3.close();
}

/***************************************************
* Function: write2
* Description: to write the sorted spellbook with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write2(spell *sp,int y,ofstream &file3){
	sort2(sp,y);
	for(int i=0; i<y; i++){
		file3 << sp[i].effect << " " << sp[i].title2 << endl;//write the sorted information
	}
	file3.close();
}

/***************************************************
* Function: write_2
* Description: to write the sorted spellbook with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write_2(spell *sp,int y,ofstream &file3){
	sort_2(sp,y);
	for(int i=0; i<y; i++){
		if(sp[i].effect != ""){//If the user is student, hide all the death and poison information
			file3 << sp[i].effect << " " << sp[i].title2 << endl;
		}
	}
	file3.close();
}

/***************************************************
* Function: write3
* Description: to write the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write3(spellbook *arr,int n,ofstream &file3){
	sort3(arr,n);
	for(int i=0; i<n; i++){
		file3 << arr[i].t1 << " " << arr[i].rate << endl;//write the sorted information
	}
	file3.close();
}

/***************************************************
* Function: write_3
* Description: to write the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write_3(spellbook *arr,int n,ofstream &file3){
	sort_3(arr,n);
	for(int i=0; i<n; i++){
		if(arr[i].t1 != ""){//If the user is student, hide all the death and poison information
			file3 << arr[i].t1 << " " << arr[i].rate << endl;
		}
	}
	file3.close();
}

/***************************************************
* Function: file_h
* Description: write some on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void file_h(char *h,ofstream &file3,int x,spellbook *arr,int n,spell *sp,int y){
	file3.open(h,ios::out);
	if(file3.is_open()){
		if (x==1){
			write_1(arr,n,file3);//If the user is student, hide all the death and poison information	
		}
		else if (x==2){
			write_2(sp,y,file3);//If the user is student, hide all the death and poison information
		}
		else if(x==3){
			write_3(arr,n,file3);//If the user is student, hide all the death and poison information
		}
	}	
	file3.close();
}

/***************************************************
* Function: fileh
* Description: write some on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void fileh(char *h,ofstream &file3,int x,spellbook *arr,int n,spell *sp,int y){
	file3.open(h,ios::out);
	if(file3.is_open()){
		if (x==1){
			write1(arr,n,file3); //write the sorted information			
		}
		else if (x==2){
			write2(sp,y,file3); //write the sorted information
		}
		else if(x==3){
			write3(arr,n,file3); //write the sorted information
		}
	}	
	file3.close();
}

/***************************************************
* Function: print_or_write
* Description: let the user choose print to screen orwrite on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void print_or_write (spellbook *arr,int &z, int n,int x,spell *sp,int y,char *h,ofstream &file3){
	if (x != 4){
		cout << "How would you like the information dispalyed?\n1:print to screen and 2:print to file): " << endl;
		cin >> z;
		cin.ignore(256,'\n'); //ignore the previous cin
		cin.clear();
		if (z == 1){ 
			if(x == 1){
				print1(arr,n);//print the sorted information
			}
			else if(x == 2){
				print2(sp,y);//print the sorted information
			}
			else if(x == 3){
				print3(arr,n); //print the sorted information
			}
		}
		else if(z == 2){
			cout << "Please provide desired filename: " ;
			cin.getline(h,1000);
			fileh(h,file3,x,arr,n,sp,y); //write the sorted information
		}
	}
	else{
		cout << "The end" << endl;
	}
}

/***************************************************
* Function: print_or_write1
* Description: let the user choose print to screen orwrite on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void print_or_write1 (spellbook *arr,int &z, int n,int x,spell *sp,int y,char *h,ofstream &file3){
	//If the user is student, hide all the death and poison information
  if (x != 4){
		cout << "How would you like the information dispalyed?\n1:print to screen and 2:print to file): " << endl;
		cin >> z;
		cin.ignore(256,'\n');
		cin.clear();
		if (z == 1){
			if(x == 1){
				print_1(arr,n);//print the sorted information
			}
			else if(x == 2){
				print_2(sp,y);//print the sorted information
			}
			else if(x == 3){
				print_3(arr,n);//print the sorted information
			}
		}
		else if(z == 2){
			cout << "Please provide desired filename: " ;
			cin.getline(h,1000);
			file_h(h,file3,x,arr,n,sp,y);//write the sorted information
		}
	}
	else{
		cout << "The end" << endl;
	}
}

/***************************************************
* Function: check_info
* Description: Check the entered id whether in the wizards.txt or not
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void check_info (int num, int &a, string &b,wizard *array,int &c, int &d, int z,spellbook *arr,int n,int y,spell *sp,char *h,ofstream &file3){
	c = 0;
	for(int i=0; i<num; i++){
		if((atoi(array[i].id.c_str())) == a){ //Check the entered id whether in the wizards.txt or not
			c = 1;
			d = i;
			break; 
		}
	}
	if(c == 1){	//In it
		cout << "\nWelcome!" << endl;
		cout <<"Name: " << array[d].name << "\nID: " << array[d].id << "\nStatus: " << array[d].title << "\nBeard Length: " << array[d].length << endl;
		int x;
		do{
		sort(array,x);
		if(array[d].student == 0){ //This is not a student
			print_or_write(arr,z,n,x,sp,y,h,file3);
		}
		else if(array[d].student == 1){ //This is a student
			print_or_write1(arr,z,n,x,sp,y,h,file3);
		}		
		}while(x == 1 || x == 2 || x == 3);
	}  
}

/***************************************************
* Function: check_info1
* Description: Check the entered id whether in the wizards.txt or not
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void check_info1 (int num, int &a, string &b, wizard *array, int &c, int &d,int z, int n, spellbook *arr,int y,spell *sp,char *h,ofstream &file3){	 
	if(c == 0){ //Not in it
		cout << "Do not match!" << endl;
		int e = 1;
		do{
			login(a,b);
			check_info(num,a,b,array,c,d,z,arr,n,y,sp,h,file3); //Check the entered id whether in the wizards.txt or not
			e++;
		}while(e<=2 && c==0);		//Only allow 3 times attemps
		if(e>2 && c==0){
			cout << "You are just allowed to try 3 times." << endl; //Only allow 3 times attemps
		}
	}
}

/***************************************************
* Function: get_spellbook_data
* Description: read information from spellbook
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void get_spellbook_data (spellbook* arr,int &n,ifstream &file2, spell *sp, int &y){
	y = 0;
	float p = 0;
	float q = 0;
	for(int i=0; i<n; i++){
		arr[i].allow = 0;
	}
	for(int i=0; i<n; i++){
		file2 >> arr[i].t1;
		file2 >> arr[i].author;
		file2 >> arr[i].pages;
		file2 >> arr[i].edition;
		file2 >> arr[i].numbers;
		for(int j=0; j<arr[i].numbers; j++){		
			file2 >> sp[(j+y)].title2;
			file2 >> sp[(j+y)].rate2;
			p += sp[j+y].rate2;//the total rate
			q = p/arr[i].numbers;
			file2 >> sp[(j+y)].effect;
			if(sp[j+y].effect.at(0) == 'd' || sp[j+y].effect.at(0) == 'p'){ //If the effect is death or posion
				arr[i].allow = 1;
			}			
		}
		arr[i].rate = q; //average rate
		p = 0;
		y += arr[i].numbers; 
	}
}

/***************************************************
* Function: get_spell_data
* Description: read information from spellbook
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void get_spell_data (ifstream &file2, int &n,spellbook *arr,spell *sp, int &y){
	int num;
	float p,q;
	for(int i=0; i<num; i++){
		for(int j=0; j<arr[i].numbers; j++){		
			file2 >> sp[(j+y)].title2;
			file2 >> sp[(j+y)].rate2;
			p += sp[j+y].rate2;//the total rate
			q = p/arr[i].numbers; //average rate
			file2 >> sp[(j+y)].effect;
			if(sp[j+y].effect.at(0) == 'd' || sp[j+y].effect.at(0) == 'p'){//If the effect is death or posion
				arr[i].allow = 1;
			}			
		}
	}
}	

/***************************************************
* Function: create_spellbooks
* Description: Create the array on heap
* Parameters: int
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: array on heap
***************************************************/
spellbook *create_spellbooks(int n){
	spellbook *arr = new spellbook [n];	//Create the array on heap
	return arr;
}

/***************************************************
* Function: create_spell
* Description: Create the array on heap
* Parameters: int
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: array on heap
***************************************************/
spell *create_spell(int num){
	spell *sp = new spell [100];	//Create the array on heap
	return sp;
}
