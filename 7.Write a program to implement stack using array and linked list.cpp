//Implementing a Stack using an Array and Linked list
/*
Stack is a linear data structure which is a collection of elements which are inserted or deleted according to the LIFO rule i.e Last In First Out. Take the example of a stack
of chairs which are placed one on top of another we keep on adding new chairs to the top and when we need to take one we take the top most one very similar to how a stack works.
#########################################################################################################################################

Where is Stack used ?

1.Usually, most of the recusrsive programs use stack implementation internally to follow recursion and when a programmer wants to convert the recusrive function to an iterative
function stack data structure can be used to achieve this very easily.
2.Expression conversion and evaluation like converting an infix expression to postfix, prefix and vice versa or to check if the paranthesis in an expression are balanced or not
and evaluation of expressions can be programmed easily using a dtack.
3.Stack is used to implement algorihtms like tower of hanoi and other graph algorithms.

#########################################################################################################################################

Operations performed with a Stack
1.Push() To insert data into the stack
2.Pop() To remove/delete data from the stack
3.isEmpty() To check whethet a stack is empty or not
4.isFull() To check whethet a stack is full or not
5.Peek() is used to check data at a particular index
6.StackTop() is used to find what is at the top of the stack

#########################################################################################################################################
                                                            Implementing Stack using an Array
#########################################################################################################################################

To implement stack using array we need an array of required size and top pointer to insert/delete data from the stack and by default top=-1 i.e the stack is empty.

#########################################################################################################################################

Stack with Array
In the code below, first we create a class Stack in which we'll add an array to store the data and then a pointer top which helps us to interact and perform various functions 
of a stack altogether

#########################################################################################################################################
*/
class Stack
{
    int top;
    
    public:
    int array[100];  
    //Maximum size of Stack is 100
    
    //construtor
    Stack(){top = -1;}
    //functions/operations performed by a stack
    void push(int x);
    int pop();
    void isEmpty();
    void Display();
};

/*
First we need learn two important functions namely push and pop to insert and remove data from the stack

#########################################################################################################################################

Push ()
The Push() function is used to insert data, but before inserting we need to check wheteher the stack is full or not because if the stack is already full we cannot carry out
the push operation this is also called as stack overflow, else if there's space insert the new element and increment the top pointer.

#########################################################################################################################################
*/

/ X is the element to be inserted in the stack
void Stack::push(int x)
{   //100 here is the limit we set to stack
    if(top >= 100)
    {   /*if the top pointer is greater than 100
        the stack is full */
        cout << "Stack Overflow \n";
    }
    else
    {   /*we need to increment the top pointer
        so that it points to the next free space*/
        array[++top] = x;
        cout << "Pushed "<<x<<"\n";
    }
}

/*
#########################################################################################################################################

Pop ()
Next the Pop() function to delete/remove the data from the stack and before we proceed we need to check for an empty stack because if it's empty there's nothing to pop,
to do so we check if pop < 0 i.e -1 meaning that it's empty or else fetch/return the value at top pointer and then decrement it.

#########################################################################################################################################
*/
/no arguments needed we always remove the top-most element
int Stack::pop()
{
    if(top < 0)
    {   //top points to nothing i.e stack is empty
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {   /*decrement the top pointer and it
        points to the next top element in the stack*/
        int d = array[top--];
        return d;
    }
}

/*
#########################################################################################################################################

Display ()
Display function is used to print all the values in a stack, for this from start from beginning i.e from zero till we reach the top pointer/location print all the values
one by one.

#########################################################################################################################################
*/

void Stack::Display()
{  /* We iterate from zero till we reach the top*/
    for(int i=0;i<=top;i++)
    {  
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
/*
#########################################################################################################################################

Advantage : implementing Stack using an Array : Easy and simple programming logic with no complicated code

Disadvantage : maximum size / stack size in pre-limited and not dynamic, so not efficient in terms of memory management.

#########################################################################################################################################

Implementing all operations in a Stack using Array
Pseudocode
1.START
2.We begin with a class named Stack
3.Create a pointer top which we will use to carry out all operations
4.Initialize an array in which we'll be storing our data
5.Initialize a constructor as top = -1 indicating that stack is empty
6.Push() - function, we use this function to insert data into the stack, so first we check if top==full i.e stack is full and data cannot be inserted. Else increment the
top pointer and insert the data.
7.Pop() - function, this function is used to remove data from the stack, first we check if top==-1 i.e if stack is empty nothing is there to delete. Else delete the
element in top pointer and decrement it.
8.isEmpty() - function check whether stack is empty i.e to p== - 1 or top < 0
9.display() - function to display the contents of the stack, we iterate through the array from the beginning till we reach the top pointer.
10.END

#########################################################################################################################################
*/

//Program - Stack using Array

# include<iostream>
using namespace std;

class Stack
{
    int top;
    
    public:
    int array[100];  
    //Maximum size of Stack is 100
    
    //construtor
    Stack(){top = -1;}
    
    void push(int x);
    int pop();
    void isEmpty();
    void Display();
};


void Stack::push(int x)
{
    if(top >= 100)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        array[++top] = x;
        cout << "Pushed "<<x<<"\n";
    }
}

int Stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = array[top--];
        return d;
    }
}

void Stack::isEmpty()
{
    if(top < 0)
    {
        cout << "Stack empty \n";
    }
    else
    {
        cout << "Stack not empty \n";
    }
}

void Stack::Display()
{
    for(int i=0;i<=top;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main() {

    Stack st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    st.Display();
    
    cout<<"Popped "<<st.pop()<<endl;
    cout<<"Popped "<<st.pop()<<endl;
    
    st.Display();
}

/*
#########################################################################################################################################
                                        Implementing Stack using a Linked List
#########################################################################################################################################

Nodes & Linked List

To implement stack using linked list, first we need Nodes which can be implemented using a structure or a class and each node consists of a variable to store the data 
and pointer pointing to the next node, these nodes are used by another class stack which is used to perform all stack operations.

#########################################################################################################################################
*/

class Node
{
public:
	int data; //store elements of a stack
	Node *next; //pointer to next node
};

/*
#########################################################################################################################################
This is how nodes work the first node points to next and that to next and so on, Last Node points to NULL.
***********************************************************************************************
[Data]First Node => [Data]Second Node =>[Data]Third Node => .........[Data]Nth Node=>NULL 
***********************************************************************************************

In the code below, we create a class Stack, It uses the Nodes to store data and structure it properly. We also have a top pointer which is essential to perform 
operations and modify data of the stack.

#########################################################################################################################################
*/
class Stack
{
	private:
		Node *top;
	public:
		Stack(){top=NULL;}
		void push(int x);
		int pop();
		void display();
};

/*
#########################################################################################################################################

Push ()
Push() operation, before pushing we create/initialize an new node and check if it's initialized or NULL becuase a new node fails to initialize and becomes NULL
only when the heap memory is full meaning that the stack is FULL, otherwise we insert data into the new node and point it to the top and then point top to this 
node becuase this is the new top memember, stack follows LIFO so the last in will be the first out i.e top.

#########################################################################################################################################
*/
void Stack::push(int x)
{   
	Node *t=new Node;
    /* if New node fails to create i.e NULL*/
	if(t==NULL)
		cout<<"Stack is Full\n";
	else
	{   //enter the new data and update top pointer
		t->data=x;
		t->next=top;
		top=t;
		cout<<x<<" is pushed"<<endl;
	}
}
/*
#########################################################################################################################################

Pop ()
Pop() operation, first we need to check if top==NULL i.e top is empty meaning that the stack is empty and nothing can be deleted, else store the value pointed by top 
and then make the next node of pointer as top as the previous node is to be deleted.

#########################################################################################################################################
*/
int Stack::pop()
{
	int x=-1;
    //if top pointer is empty
	if(top==NULL)
		cout<<"Stack is Empty\n";
	else
	{   //data stored at top
		x=top->data;
		Node *t=top;
        //top points to next pointer
		top=top->next;
        //delete previous node
		delete t;
	}
	return x;
}
/*
#########################################################################################################################################

Display ()
Display(), first create an empty node p and then set it's value to top and we keep iterating and printing data values in node till we reach the end if
the stack i.e next=NULL.

#########################################################################################################################################
*/

void Stack::display()
{
	Node *p=top;
    //iterate till the end i.e NULL
	while(p!=NULL)
	{   //print data at each pointer
		cout<<p->data<<" ";
		p=p->next;	
	}	
	cout<<endl;
}
/*
#########################################################################################################################################
Advatage : When we implement stack using linked list memory is used efficienlty and dynamically

Disadvantage : it's not too difficult but the code is a bit complex compared to array implementation of stack as this requires proper understanding of pointers,
structures and linked lists.

#########################################################################################################################################
Implementing all operations in a Stack using Linked List
#########################################################################################################################################

Pseudocode
1.START
2.First we initialize the Node class which is the main element of out linked list, a node contains a variable to store data and a pointer to next node.
3.Now we create the class Stack.
4.We need a top pointer node for carrying out all operations related to the stack, it is initialized as NULL
5.Push() - function, is used to insert data into the stack by creation of a new node, so first we create a new node ' t ' in the heap if this operations 
fails that means the heap is full and so is the stack and we cannot push more data else add data into the new node ' t 'and make
t->next =top and top point at t, so the top gets updated to the latest element inserted.
6.Pop() - function, is used to remove data by deleting a node from the linked list, so first we check if top == NULL i.e stack is empty and nothing to delete else get
the 
data value in the top pointer and then return/print the data value and finally delte the pointer and update the top value to next available node.
7.Display() - function, is used to print all the data in the nodes and we iterated through all the nodes from the beginnning till we reach the last node 
i.e node==NULL.
8.END

#########################################################################################################################################
*/

//Program - Stack using Linked List
#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};

class Stack
{
	private:
		Node *top;
        
	public:
		Stack(){top=NULL;}
		void push(int x);
		int pop();
		void display();
};

void Stack::push(int x)
{
	Node *t=new Node;
    
	if(t==NULL)
		cout<<"Stack is Full\n";
	else
	{
		t->data=x;
		t->next=top;
		top=t;
		cout<<x<<" is pushed"<<endl;
	}
}

int Stack::pop()
{
	int x=-1;
    
	if(top==NULL)
		cout<<"Stack is Empty\n";
	else
	{
		x=top->data;
		Node *t=top;
		top=top->next;
		delete t;
	}
	return x;
}

void Stack::display()
{
	Node *p=top;
    
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;	
	}	
	cout<<endl;
}

int main()
{
	Stack stk;
	
	stk.push(11);
	stk.push(12);
	stk.push(13);
	stk.push(14);
	stk.push(15);
	
	stk.display();
	
	cout<<stk.pop()<<" is popped \n";
	
	stk.display();
	
	return 0;
 }
/*
#########################################################################################################################################

Conclusion
We can implement stack using both array and linked list however it's better to use a liked list as it's a good practice to use memory efficiently and dynamically
however for beginners and while learning or understanding how a Stack works to simplfy things we can use array implementation of a Stack.
#########################################################################################################################################
*/
