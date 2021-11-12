//Program to perform the menu driven operations on strings using standard library functions
/*
String Operator Overloading in C++ Example

This program is a combination of various important string operations with the help of operator overloading. These are frequently asked questions in papers.
This program uses the standard C++ library “CString” for all of these string functions.
In this program we will perform the following operations on the strings with the help of operator overloading;

+  String concatenation
=  String compare
==  String copy
/ Finding substring
<<  Displaying the string from the object of class T4Tutorias
>>  Reversing the string
Example of string Equality

Enter the 1st string: Welcome

Enter the end string: Welcome2

both strings are not equal

***********************

Enter the 1st string: T4T

Enter the end string: T4T

both strings are equal

Example of string Copy

Enter the 1st string: Welcome

the copies string is: Welcome

Example of  string Concat

Enter the 1st string: Welcome

Enter the end string: to our site

After concatenation, the string will be: Welcome to our site

Example of  string Reverse

Enter the 1st string: Welcome

The reverse string is: emoclew

Example of  string palindrome

Enter the string: Welcome

Welcome is a string but not a palindrome

Enter the string: abc

abc is a string and a palindrome

Example of substring

Enter the 1st string: Welcome

Enter the 2nd string: come

come is a subset of Welcome.

Program
*/

String Operator Overloading in C++ Example
By Prof. Fazal Rehman Shamil
This program is a combination of various important string operations with the help of operator overloading. These are frequently asked questions in papers.
This program uses the standard C++ library “CString” for all of these string functions.
In this program we will perform the following operations on the strings with the help of operator overloading;

+  String concatenation
=  String compare
==  String copy
/ Finding substring
<<  Displaying the string from the object of class T4Tutorias
>>  Reversing the string
Example of string Equality

Enter the 1st string: Welcome

Enter the end string: Welcome2

both strings are not equal

***********************

Enter the 1st string: T4T

Enter the end string: T4T

both strings are equal

Example of string Copy

Enter the 1st string: Welcome

the copies string is: Welcome

Example of  string Concat

Enter the 1st string: Welcome

Enter the end string: to our site

After concatenation, the string will be: Welcome to our site

Example of  string Reverse

Enter the 1st string: Welcome

The reverse string is: emoclew

Example of  string palindrome

Enter the string: Welcome

Welcome is a string but not a palindrome

Enter the string: abc

abc is a string and a palindrome

Example of substring

Enter the 1st string: Welcome

Enter the 2nd string: come

come is a subset of Welcome.

Program

C++
/*******************************************************
String operations using operator overloading in C++
*******************************************************/
#include<iostream>
#include<cstring>
using namespace std;
//class definition
class Str{
private:
//character array to denote string 
char str[30];
public:
// functions
void input()
{
cout<<"\nPlease Enter the string : ";
cin>>str;
}
 
//function definition for show()
void show() 
{
cout<<"\n"<<str;
}
  
//Function definition for operator "=="
void operator== (Str formal_parameter)
{
strcpy(formal_parameter.str,str);
cout<<"\n\tCopied String is : "<<formal_parameter.str;
}

//Function definition for operator "="
int operator= (Str formal_parameter)
{
if(strcmp(str,formal_parameter.str)==0)
return 1;  //strings are equal
return 0;  //strings are not equal
}

//Function definition for operator "+"
void operator+ (Str formal_parameter)
{
strcat(str,formal_parameter.str);
cout<<"\n\t--String After Concat is : "<<str;
}

//Function definition for operator "<<"
void operator<< (Str formal_parameter)
{
cout<<"\n\t--The string you entered is :"<<formal_parameter.str;
}

//Function definition for operator ">>"
void operator>> (Str formal_parameter)
{
int i;
cout<<"\n\t--The string after reversing is : ";
for(i=strlen(formal_parameter.str);i>=0;i--)
cout<<formal_parameter.str[i];
}

//Function definition for Finding substring
int operator/ (Str formal_parameter) 
{
int flag=0,k,i,j,len=strlen(str),len1=strlen(formal_parameter.str)-1;
for(i=0;i<len;i++)
{
if(str[i]==formal_parameter.str[0])
{
if(str[i+len1]==formal_parameter.str[len1])
{
for(j=i,k=0;j<i+len1+1,k<len1;j++,k++)
{
if(str[j]==formal_parameter.str[k])
flag=1;
else
{ 
flag=0;
break;
} 
}
}
}
}
if(flag==0)
return 0;  //not a substring
return 1;  //it is a substring
}

//Function definition for palindrome()
void palindrome()
{
int i,j,flag=0;
for(i=0,j=strlen(str)-1;i<=strlen(str),j>=0;j--,i++)
{
if(str[i]!=str[j])
{
flag=1;
cout<<"\n\t****Not a palindrome****";
break;
}
else
flag=0;
}
if(flag==0)
cout<<"\n\t--Palindrome--";
}
  
};

int main()
{
int opt,c,opt1=1;
//object declaration
Str a,b;
while(opt1==1 && opt!=8)
{
//showing menu to the user
cout<<"\nMain Menu\n\t1.Equality\n\t2.String Copy\n\t3.Concat";
cout<<"\n\t4.Show\n\t5.Reverse\n\t6.Palindrome\n\t7.Sub String";
cout<<"\n\t8.Exit\n"<<endl<<"Please Enter your choice:";
//taking user choice
cin>>opt;
//handling user choice
switch(opt)
{
case 1:
cout<<"\nEnter the 1st string-\n";
a.input();
cout<<"\nEnter the 2nd string-\n";
b.input();
c=a=b;
if(c==1)
cout<<"\n\t****Strings are Equal****\n";
else
cout<<"\n\t****Strings are not Equal****\n";
break;
case 2:
a.input();
//using function overloading for copying string
a==b;
break;
case 3:  
cout<<"\nEnter the 1st string-\n";
a.input();
cout<<"\nEnter the 2nd string-\n";
b.input();
//using function overloading for concatenation
a+b;  
break;
case 4:
a.input();
b<<a;
break;
case 5:
a.input();
//showing string using "<<" operator
b>>a;
break;
case 6:
a.input();
//check for palindrome
a.palindrome();
break;
case 7:
cout<<"\nEnter the Main string-\n";
a.input();
cout<<"\nEnter the other string-\n";
b.input();
//using operator overloading for finding substring
c=a/b;
if(c==1)
cout<<"\n\t****Substring****\n";
else
cout<<"\n\t****Not a substring****\n";
break;
case 8: return 0;
default: cout<<"Invalid choice..try again\n";
} 
if(opt!=8){
cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
cin>>opt1;
}
}
return 0;
}


