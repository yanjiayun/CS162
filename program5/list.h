#ifndef LIST_H
#define LIST_H

#include<iostream>
#include"node.cpp"

using namespace std;

class Linked_List{
	private:
		unsigned int length;
		Linked_List_Node *first; 
	public:
		Linked_List();
		~Linked_List();
		int get_length();
		void print();
		void clear(); 
		unsigned int push_front(int); 
		unsigned int push_back(int); 
		unsigned int insert(int value, unsigned int index);
		void sort_ascending();
		void sort_descending();
		void is_prime();
};

void merge_sort(Linked_List_Node**);
void half(Linked_List_Node*,Linked_List_Node**, Linked_List_Node**);
Linked_List_Node* final_step(Linked_List_Node*, Linked_List_Node*);
void switch_node(Linked_List_Node**, Linked_List_Node*, Linked_List_Node*,Linked_List_Node*);
Linked_List_Node* d_sort(Linked_List_Node*);

#endif
