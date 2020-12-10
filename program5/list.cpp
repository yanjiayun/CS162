/******************************************************
** Program: list.cpp
** Author: Jiayun Yan
** Date: 06/09/2019
** Description: This is the list.cpp, contain the functions in list class and other functions.
** Input: the same as main function
** Output: the same as main function
******************************************************/
#include"list.h"

/***************************************************
* Function: Constructor
* Description: constructor for list class 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none defalut consturctor
***************************************************/
Linked_List::Linked_List(){
	first = NULL;
	length = 0;
}

/***************************************************
* Function: destructor
* Description: use to free memory 
* Parameters: none
* Return value: none
* Precondition: none
* Postcondition: none
***************************************************/
Linked_List::~Linked_List(){
}

/***************************************************
* Function: print
* Description: use to print the list
* Parameters: none
* Return value: none
* Precondition: the list exist
* Postcondition: the list printed
***************************************************/
void Linked_List::print(){
	Linked_List_Node *print = this->first;
	while(print != NULL){
		cout << print->value << " ";		
		print = print->next;
	}
	cout << " " << endl;
}


/***************************************************
* Function: get_length
* Description: To print the length of list
* Parameters: none
* Return value: an integer number
* Precondition: the list exist
* Postcondition: the length printed
***************************************************/
int Linked_List::get_length(){
	return length;
}


/***************************************************
* Function: push_back
* Description: To add value in the back of list
* Parameters: an interger number
* Return value: unsigned int
* Precondition: the list exist
* Postcondition: the value added
***************************************************/
unsigned int Linked_List::push_back(int value){
	Linked_List_Node *current = new Linked_List_Node;
	Linked_List_Node *temp = first;
	current->value = value;
	current->next = NULL;
	if(temp != NULL){
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = current;
	}
	else{
		first = current;
	}
	return length++;
}

/***************************************************
* Function: push_front
* Description: To add value in the front of list
* Parameters: an interger number
* Return value: unsigned int
* Precondition: the list exist
* Postcondition: the value added
***************************************************/
unsigned int Linked_List::push_front(int value){
	Linked_List_Node *current = new Linked_List_Node;
	current->value = value;
	current->next = first;
	first = current;
	
	return length++;
}

/***************************************************
* Function: insert
* Description: To insert value of list
* Parameters: an interger number
* Return value: unsigned int
* Precondition: the list exist
* Postcondition: the value added
***************************************************/
unsigned int Linked_List::insert(int value, unsigned int index){
	if(index == length+1){
		push_back(value);
	}
	else if(index == 1){
		push_front(value);
	}
	else{
		Linked_List_Node *current = new Linked_List_Node;
		Linked_List_Node *temp1 = first;
		Linked_List_Node *temp2 = first;
		current->value = value;
		temp2 = first;
		for(int i=1; i<=index-1; i++){
			temp1 = temp2;
			temp2 = temp2->next;
		}
		temp1->next = current;
		current->next = temp2;
	}
	return length++;
}

/***************************************************
* Function: is_prime
* Description: To check whether the value is prime, and print how many prime are there.
* Parameters: none 
* Return value: none
* Precondition: the list exist
* Postcondition: primes finded
***************************************************/
void Linked_List::is_prime(){
	int num=0;
	Linked_List_Node *check = this->first;
	cout << "Prime: ";
	while(check != NULL){
		if(check->value == 2){
			cout << check->value << " ";
			num++;
		}
		else if(check->value == 1){
			cout << "";
		}
		else{
			int times = 0;
			for(int i=2; i<(check->value); i++){
				if((check->value)%i == 0){
					times++;
					break;
				}
			}
			if(times == 0){
				num++;
				cout << check->value << " ";
			}
		}
		check = check->next;
	}
	cout << "\nYou have " << num << " prime number(s) in your list" << endl;
}

/***************************************************
* Function: half
* Description: to help merge sorting
* Parameters: 1 Linked_List_Node*, and 2 Linked_List_Node**
* Return value: none
* Precondition: the list exist
* Postcondition: one part of merge sort compelet
***************************************************/
void half(Linked_List_Node* a,Linked_List_Node** front, Linked_List_Node** back){
	Linked_List_Node* upper;
	Linked_List_Node* lower;
	lower = a;
	upper = a->next;

	while(upper != NULL){
		upper = upper->next;
		if(upper != NULL){
			lower = lower->next;
			upper = upper->next;
		}
	}

	*front = a;
	*back = lower->next;
	lower->next = NULL;
}

/***************************************************
* Function: final_step
* Description: to help merge sorting
* Parameters: 2 Linked_List_Node*
* Return value: none
* Precondition: the list exist
* Postcondition: one part of merge sort compelet
***************************************************/
Linked_List_Node* final_step(Linked_List_Node* front, Linked_List_Node* back){
	Linked_List_Node *sorted = NULL;

	if(front == NULL){
		return back;
	}
	else if(back == NULL){
		return front;
	}
	if(front->value <= back->value){
		sorted = front;
		sorted->next = final_step(front->next,back);
	}
	else{
		sorted = back;
		sorted->next = final_step(front,back->next);
	}
	return sorted;
}

/***************************************************
* Function: merge_sort
* Description: to help merge sorting
* Parameters: 1 Linked_List_Node**
* Return value: none
* Precondition: the list exist
* Postcondition: one part of merge sort compelet
***************************************************/
void merge_sort(Linked_List_Node** a){
	Linked_List_Node* first = *a;
	Linked_List_Node* front;
	Linked_List_Node* back;

	if(first == NULL || first->next == NULL){
		return;
	}
	half(first,&front,&back);
	merge_sort(&front);
	merge_sort(&back);
	*a = final_step(front,back);
}

/***************************************************
* Function: sort_ascending
* Description: sort the list ascending
* Parameters: none
* Return value: none
* Precondition: the list exist
* Postcondition: list sorted
***************************************************/
void Linked_List::sort_ascending(){
	Linked_List_Node *head = first; 
	Linked_List_Node *front;
	Linked_List_Node *back;
	if(first == NULL || first->next == NULL) {
		return;
	}
	half(head,&front,&back);
	merge_sort(&front);
	merge_sort(&back);
	first = final_step(front, back);
}

/***************************************************
* Function: switch_node
* Description: to help selection sorting
* Parameters: 1 Linked_List_Node** and 3 Linked_List_Node*
* Return value: none
* Precondition: the list exist
* Postcondition: one part of selection sort compelet
***************************************************/
void switch_node(Linked_List_Node** first1, Linked_List_Node* a, Linked_List_Node *b, Linked_List_Node *c){
	*first1 = b;
	c->next = a;

	Linked_List_Node *temp = b->next;
	b->next = a->next;
	a->next = temp;
}

/***************************************************
* Function: d_sort
* Description: to help selection sorting
* Parameters: 1 Linked_List_Node*
* Return value: none
* Precondition: the list exist
* Postcondition: one part of selection sort compelet
***************************************************/
Linked_List_Node* d_sort(Linked_List_Node *first){
	if(first->next == NULL){
		return first;
	}
	Linked_List_Node *minimum = first;
	Linked_List_Node *a;
	Linked_List_Node *b = NULL;
	for(a = first; a->next !=NULL; a=a->next){
		if(a->next->value > minimum->value){
			minimum = a->next;
			b = a;
		}
	}
	if(minimum != first){
		switch_node(&first,first,minimum,b);
	}
	first->next = d_sort(first->next);
	return first;
}

/***************************************************
* Function: sort_descending
* Description: sort the list descending
* Parameters: none
* Return value: none
* Precondition: the list exist
* Postcondition: list sorted
***************************************************/
void Linked_List::sort_descending(){
	if(first == NULL){
		return;
	}
	first = d_sort(first);
}

/***************************************************
* Function: clear
* Description: To free memory
* Parameters: none
* Return value: none
* Precondition: the list exsit
* Postcondition: all memory been freed
***************************************************/
void Linked_List::clear(){
	int b = length;
	for(int j=1; j<=length; j++){
		Linked_List_Node *a = first;
		for(int i=1; i<b; i++){
			a = a->next;
		}
		delete a;
		b--;
	}
}
