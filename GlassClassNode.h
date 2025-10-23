#ifndef GLASSCLASSNODE_H
#define GLASSCLASSNODE_H

#include "GlassNode.h"
#include <string>
#include <iostream>
using namespace std;

class GlassLList {

	GlassNode* head;

	public:
	//Default construct
	GlassLList() {
	    head = NULL;
	}

	// Insert at head of the list
	void insertAtHead(string glassName, string address, string roomLoc, 
	   string glassType, string hardware, int dueDate, double x, double y, double z)
	{
	    GlassNode *newNode = new GlassNode(glassName, address, roomLoc, glassType, hardware, dueDate, x, y, z);
	    
	    if(head == NULL) {
	        head = newNode;
	        return;
	    }
	    newNode->next = this->head;
	    this->head = newNode;
	}

	//Insert at a specific position
	void insertAtposition(int pos, string glassName, string address, string roomLoc, 
	   string glassType, string hardware, int dueDate, double x, double y, double z)
	{
		GlassNode* temp = head;

		GlassNode *newNode = new GlassNode(glassName, address, roomLoc, glassType, hardware, dueDate, x, y, z);

		if(temp == NULL)
		{
			head = newNode;
			return;
		}

		for(int i = 0; i <= pos; ++i) 
		{
			if(pos <= 1)
			{
				newNode->next = this->head;
	    		this->head = newNode;
				return;
			}
			if(temp == NULL)
			{
				temp->next = newNode;
				return;
			}
			if(i == pos)
			{
				newNode->next = temp->next;
				temp->next = newNode;
				return;
			}
			temp = temp->next;
		}
		

	}
	
	//STILL BROKEN NO TOUCHY
	void deleteAtPos(int pos)
	{
		//STILL BROKEN!!!
		GlassNode* temp = head;
		GlassNode* prev = head;
		//need previous node -> to next

		if(head == NULL) {
	  		cout << "List is empty" << endl;
	  		return;
	  	}
		//move temp to current
		if(pos <= 1)
		{
			delete head;
			head = NULL;
			return;
		}

		for(int i = 0; i <= pos; ++i)
		{
			if(temp == NULL)
			{
				delete temp;
				temp = NULL;
				return;
			}
			if(i == pos)
			{
				prev->next = temp->next;
				delete temp;
				return;
			}
			

			//moves to next item
			//prev is one item less then temp
			//temp will be our delete item at some point
			//We need to move temp to the node infont of it
			//then remove the node prev points to and assign prev
			//to temp current node
			prev = temp;
			temp = temp->next;
		}


	}

	//Delete item from the end of the list
	void deleteFromEnd()
	{
		GlassNode* temp = head;

		//Check for Empty
		if(head == NULL) {
	  		cout << "List empty" << endl;
	  		return;
	  	}
		if(!head->next)
		{
			delete head;
			head = NULL;
			return;
		}
		while(temp->next->next)
		{
			temp = temp->next;
		}
		
		delete temp->next;
		temp->next = NULL;
	}

	int SizeOfLList() {
		GlassNode* temp = head;
		int i = 0;
		while(temp != NULL) {
			temp = temp->next;
			++i;
		}
		return i;
	}

	// Display list with spaces
	void print() {
	  GlassNode *temp = head;
	  
	  if(head == NULL) {
	  cout << "List empty" << endl;
	  return;
	  }
	
	  while (temp != NULL) {
		 cout << "___________________" << endl;
	     cout << temp->glassName << " ";
	     cout << temp->address << endl;
	     cout << temp->roomLoc << " ";
	     cout << temp->glassType << " ";
	     cout << temp->hardware << endl;
	     cout << temp->dueDate << " ";
	     cout << temp->x << " ";
	     cout << temp->y << " ";
	     cout << temp->z << endl;
		 cout << "___________________" << endl;
	     temp = temp->next;
	  }
	}
};

#endif