//8.Write a program to implement queue and circular queue using array.

/*
                           ********************** C++ Program to Implement Queue using Array **********************
A queue is an abstract data structure that contains a collection of elements. Queue implements the FIFO mechanism i.e.
the element that is inserted first is also deleted first. In other words, the least recently added element is removed first in a queue.
A program that implements the queue using an array is given as follows −

*/

#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin<<ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
/*
The output of the above program is as follows

1) Insert element to queue
2) Delete element from queue
3) Display all the elements of queue
4) Exit
Enter your choice : 1
Insert the element in queue : 4
Enter your choice : 1
Insert the element in queue : 3
Enter your choice : 1
Insert the element in queue : 5
Enter your choice : 2
Element deleted from queue is : 4
Enter your choice : 3
Queue elements are : 3 5
Enter your choice : 7
Invalid choice
Enter your choice : 4
Exit
In the above program, the function Insert() inserts an element into the queue. If the rear is equal to n-1, then the queue is full and overflow is displayed. 
  If front is -1, it is incremented by 1. Then rear is incremented by 1 and the element is inserted in index of rear. This is shown below −

######################################################################################################################################
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
######################################################################################################################################

In the function Delete(), if there are no elements in the queue then it is underflow condition. Otherwise the element at 
front is displayed and front is incremented by one. This is shown below −
######################################################################################################################################
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   }
   else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
######################################################################################################################################

In the function display(), if front is -1 then queue is empty. Otherwise all the queue elements are displayed using a for loop. This is shown below −

######################################################################################################################################
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
      cout<<endl;
   }
}
######################################################################################################################################

The function main() provides a choice to the user if they want to insert, delete or display the queue. According to the user response,
the appropriate function is called using switch. If the user enters an invalid response, then that is printed. The code snippet for this is given below −

######################################################################################################################################
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
######################################################################################################################################

*/



/*
      **********************C++ Program to Implement Circular Queue**********************

A queue is an abstract data structure that contains a collection of elements. Queue implements the FIFO mechanism i.e the element that is inserted first is also deleted first.
A circular queue is a type of queue in which the last position is connected to the first position to make a circle.
A program to implement circular queue in C++ is given as follows −

*/

#include <iostream>
using namespace std;

int cqueue[5];
int front = -1, rear = -1, n=5;

void insertCQ(int val) {
   if ((front == 0 && rear == n-1) || (front == rear+1)) {
      cout<<"Queue Overflow \n";
      return;
   }
   if (front == -1) {
      front = 0;
      rear = 0;
   } else {
      if (rear == n - 1)
      rear = 0;
      else
      rear = rear + 1;
   }
   cqueue[rear] = val ;
}
void deleteCQ() {
   if (front == -1) {
      cout<<"Queue Underflow\n";
      return ;
   }
   cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;

   if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == n - 1)
      front = 0;
      else
      front = front + 1;
   }
}
void displayCQ() {
   int f = front, r = rear;
   if (front == -1) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are :\n";
   if (f <= r) {
      while (f <= r){
         cout<<cqueue[f]<<" ";
         f++;
      }
   } else {
      while (f <= n - 1) {
         cout<<cqueue[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<cqueue[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
int main() {

   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         cout<<"Input for insertion: "<<endl;
         cin>>val;
         insertCQ(val);
         break;

         case 2:
         deleteCQ();
         break;

         case 3:
         displayCQ();
         break;

         case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
      }
   } while(ch != 4);
   return 0;
}

/*

Output
The output of the above program is as follows −

1)Insert
2)Delete
3)Display
4)Exit

Enter choice : 1
Input for insertion:
Enter choice : 1
Input for insertion:
Enter choice : 1
Input for insertion:
Enter choice : 1
Input for insertion:
Enter choice : 1
Input for insertion:
Enter choice : 2
Element deleted from queue is : 5
Enter choice : 2
Element deleted from queue is : 3
Enter choice : 2
Element deleted from queue is : 2
Enter choice : 1
Input for insertion: 6
Enter choice : 3
Queue elements are :
7 9 6
Enter choice : 4
Exit

*/


