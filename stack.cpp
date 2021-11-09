// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void push(int stack[],int& top,int size,int ele)
{
    if(top==size-1)
    {
        cout<<"\n Stack is OverFlow!!!!";
        
    }
    else
    {
        stack[++top]=ele;
    }
        
        
}
void pop(int stack[],int& top,int size)
{
    if(top==-1)
        cout<<"\n Stack is UnderFlow!!!!";
    else
        --top;
}

void traversal(int stack[],int top)
{
    if(top==-1)
        cout<<"\n Stack is Empty!!!!";
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<stack[i]<<" -> ";
        }
    }
}
int main() {
    // Write C++ code here
    int size;
    cout<<"\nEnter the size ";
    cin>>size;
    int stack[size];
    cout<<"\nThe Size Of The Stack is "<<size;
    int top=-1;
    char ch;
    do
    {
    cout<<"\n1.PUSH\n2.POP\n3.TRAVERSAL\nEnter Your Choice ";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
                cout<<"\n Push data in the stack";
                cout<<"\n Enter the Elemnet to be  pushed ";
                int x;
                cin>>x;
                //We will be pass the elemnts as an argument 
                push(stack,top,size,x);
                cout<<"\nStack After PUSH operation ";
                traversal(stack,top);
                break;
        case 2:
                cout<<"\n POP data in the stack ";
                pop(stack,top,size);
                cout<<"\nStack After POP operation ";
                traversal(stack,top);
                break;
        case 3:
                cout<<"\nStack Traversal is ";
                traversal(stack,top);
                break;
        default: 
            cout<<"\n Wrong Choice";
    }
    cout<<"\n Press Y/y to continue ";
    cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
