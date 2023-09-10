// LinkedList_prac.cpp : This file contains the 'main' function and codes which defines a creatiion of the Linked List.
// Copyrights Gourav Ghosh
//

#include <iostream>
using namespace std;

//creates a variable with the type struct node, named node. It's equivalent to: 
	//Node is a both a user-defined datatype and a name for your struct. node* next means a pointer variable named next that points to a memory address of type node (points to another node struct).
	//In terms of a linked list, you have have a struct that represents a node. 
	//This node has some data in it(in this case an integer variable) and it also has a pointer to the next or another node struct of the same type.It's like a wagon in a train of many wagons or a chain in a chainlink.

struct Node {
	int data;
	Node* next; // In C programming I will have to define it using struct Node* next; in C++ we can just type Node* next;
};



void Insert(int x) {

	Node* temp = new Node();
	(*temp).data = x;
	(*temp).next = NULL;
	head = temp; // To assign the value of the node to head

}
void Print(head) {

	 Node* temp = head; // We do not want to loose the value of the Head
	cout << "List is: ";
	while (temp != NULL) {
		cout << (*temp).data;
		temp = (*temp).next;

	}
	cout << endl;
}

int main()
{
	

	// Creating a pointer to the Node as head
	Node* head = NULL;
	int x, n;

	cout << "Enter the number of values: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter the Numbers: ";
		cin >> x;
		Insert(x);
		Print();
		
	}
	
	

}


