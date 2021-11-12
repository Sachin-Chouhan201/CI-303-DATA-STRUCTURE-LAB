//9.Write a program to insert an element in the beginning and end of singly linked list.

/*
Singly linked list is a type of data structure that is made up of nodes that are created using self referential structures. Each of these nodes contain two parts, 
namely the data and the reference to the next list node. Only the reference to the first list node is required to access the whole linked list. This is known as the head.
The last node in the list points to nothing so it stores NULL in that part.

A program to implement singly linked list is given as follows.
*/

#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}

/*
Output
The linked list is: 9 2 7 1 3
In the above program, the structure Node forms the linked list node. It contains the data and a pointer to the next linked list node. This is given as follows.
*/

struct Node {
   int data;
   struct Node *next;
};

/*
The function insert() inserts the data into the beginning of the linked list. It creates a new_node and inserts the number in the data field of the new_node. 
  Then the new_node points to the head. Finally the head is the new_node i.e. the linked list starts from there. This is given below.
*/

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

/*
The function display() displays the whole linked list. First ptr points to head. Then it is continuously forwarded to the next node until all the data values of 
the nodes are printed. This is given below.
*/

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

/*
In the function main(), first various values are inserted into the linked list by calling insert(). Then the linked list is displayed. This is given below.
*/

int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}
