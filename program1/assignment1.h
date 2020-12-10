/******************************************************
** Program: assignment1.h
** Author: Jiayun Yan
** Date: 04/14/2019
** Description: This is the drive.cpp, contain main function 
** Input: 2 command line, and all the required instruction
** Output: The information that had been sorted.
******************************************************/

#include <iostream>

using namespace std;

/***************************************************
* Function: struct wizard
* Description: to read from wizard.txt
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: struct of wizard
***************************************************/
struct wizard{        //This is the sturct to read from wizard.txt
	int length;
	string id;
	string name;
	string username;
	string title;
	int student;
};

/***************************************************
* Function: struct spellbook
* Description: to read from spellbook.txt
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: struct of spellbook
***************************************************/
struct spellbook{     //This is the sturct to read from spellbook.txt
	string t1;
	string author;
	int pages;
	int edition;
	int numbers;
	float rate;
	int allow;
	struct spell *s;
};

/***************************************************
* Function: struct spell
* Description: to read from spellbook.txt
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: struct of spell
***************************************************/
struct spell{         //This is the sturct to read from spellbook.txt
	string title2;
	float rate2;
	string effect;
};

/***************************************************
* Function: check_int
* Description: check whether the id is int or not 
* Parameters: A string 
* Return value: bool
* Precondition: none
* Postcondition: id are ints
***************************************************/
bool check_int(string x);

/***************************************************
* Function: login
* Description: let users enter id and password 
* Parameters: none 
* Return value: none
* Precondition: id should be entered
* Postcondition: id are ints
***************************************************/
void login(int &a,string &b);

/***************************************************
* Function: create_array
* Description: create array on heap 
* Parameters: none 
* Return value: none
* Precondition: file should be opened 
* Postcondition: array on heap
***************************************************/
void create_array (ifstream &file1, int &num, wizard *array);

/***************************************************
* Function: sort
* Description: print some insturctions 
* Parameters: int and array
* Return value: none
* Precondition: none 
* Postcondition: x should be enter 
***************************************************/
void sort (wizard *array,int &x);

/***************************************************
* Function: sort1
* Description: sort spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort1(spellbook *arr,int n);

/***************************************************
* Function: sort_1
* Description: sort spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort_1(spellbook *arr,int n);

/***************************************************
* Function: sort2
* Description: sort spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort2(spell *sp, int y);

/***************************************************
* Function: sort_2
* Description: sort spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort_2(spell *sp, int y);

/***************************************************
* Function: sort3
* Description: sort spellbooks with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort3(spellbook *arr, int n);

/***************************************************
* Function: sort_3
* Description: sort spellbooks with spellbooks with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void sort_3(spellbook *arr, int n);

/***************************************************
* Function: print1
* Description: to print out the sorted spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print1 (spellbook *arr,int n);

/***************************************************
* Function: print_1
* Description: to print out the sorted spellbooks with page number
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print_1 (spellbook *arr,int n);

/***************************************************
* Function: print2
* Description: to print out the sorted spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print2 (spell *sp,int y);

/***************************************************
* Function: print_2
* Description: to print out the sorted spell with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print_2 (spell *sp,int y);

/***************************************************
* Function: print3
* Description: to print out the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print3 (spellbook *arr,int n);

/***************************************************
* Function: print_3
* Description: to print out the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void print_3 (spellbook *arr,int n);

/***************************************************
* Function: write1
* Description: to write the sorted spellbook with number of pages
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write1(spellbook *arr,int n,ofstream &file3);

/***************************************************
* Function: write_1
* Description: to write the sorted spellbook with number of pages
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write_1(spellbook *arr,int n,ofstream &file3);

/***************************************************
* Function: write2
* Description: to write the sorted spellbook with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write2(spell *sp,int y,ofstream &file3);

/***************************************************
* Function: write_2
* Description: to write the sorted spellbook with effect
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write_2(spell *sp,int y,ofstream &file3);

/***************************************************
* Function: write3
* Description: to write the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write3(spellbook *arr,int n,ofstream &file3);

/***************************************************
* Function: write_3
* Description: to write the sorted spellbook with success rate
* Parameters: int and array
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information
***************************************************/
void write_3(spellbook *arr,int n,ofstream &file3);

/***************************************************
* Function: file_h
* Description: write some on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void file_h(char *h,ofstream &file3,int x,spellbook *arr,int n,spell *sp,int y);

/***************************************************
* Function: fileh
* Description: write some on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void fileh(char *h,ofstream &file3,int x,spellbook *arr,int n,spell *sp,int y);

/***************************************************
* Function: print_or_write
* Description: let the user choose print to screen orwrite on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void print_or_write (spellbook *arr,int &z, int n,int x,spell *sp,int y,char *h,ofstream &file3);

/***************************************************
* Function: print_or_write1
* Description: let the user choose print to screen orwrite on file 
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void print_or_write1 (spellbook *arr,int &z, int n,int x,spell *sp,int y,char *h,ofstream &file3);

/***************************************************
* Function: check_info
* Description: Check the entered id whether in the wizards.txt or not
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void check_info (int num, int &a, string &b,wizard *array,int &c, int &d, int z,spellbook *arr,int n,int y,spell *sp,char *h,ofstream &file3);

/***************************************************
* Function: check_info1
* Description: Check the entered id whether in the wizards.txt or not
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void check_info1 (int num, int &a, string &b, wizard *array, int &c, int &d,int z, int n, spellbook *arr,int y,spell *sp,char *h,ofstream &file3);

/***************************************************
* Function: get_spellbook_data
* Description: read information from spellbook
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void get_spellbook_data (spellbook* arr,int &n,ifstream &file2, spell *sp, int &y);

/***************************************************
* Function: get_spell_data
* Description: read information from spellbook
* Parameters: int,array and files
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: sorted information write to file
***************************************************/
void get_spell_data (ifstream &file2, int &n,spellbook *arr,spell *sp, int &y);

/***************************************************
* Function: create_spellbooks
* Description: Create the array on heap
* Parameters: int
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: array on heap
***************************************************/
spellbook *create_spellbooks(int n);

/***************************************************
* Function: create_spell
* Description: Create the array on heap
* Parameters: int
* Return value: none
* Precondition: the array should read information from correct file
* Postcondition: array on heap
***************************************************/
spell *create_spell(int num);
