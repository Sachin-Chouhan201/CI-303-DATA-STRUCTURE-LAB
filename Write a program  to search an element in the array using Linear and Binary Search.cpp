#include<stdio.h>
int main()
{
int a[25],beg,item,last,n,num,i,ch,mid,f=0;
cout<<"Menu Choice\n";
cout<<"\n 1.Linear Search";
cout<<"\n 2.Binary Search";
cout<<"\n Enter the Choice";
cin>>ch;
if(ch==1)
{
cout<<"\n Enter the number of elements in the array";
cin>>n;
cout<<"\n Enter the sorted array";
for(i=0;i<n;i++)
scanf("%d",&a[i]);
cout<<"\n Enter the item to be searched";
cin>>item;
for(i=0;i<n;i++)
{
if(a[i]==item)
{
cout<<"\n Item found at position%d"<<i+1;
break;
}
}
if(i==n)
cout<<"\n Item not found";
}
if(ch==2)
{
cout<<"\nEnter the number of elements in the array";
cin>>n;
cout<<"Enter the sorted array";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"item to be searched";
cin>>item;
last=n-1;
mid=(beg+last)/2;
while(beg<=last)
{
if(item==a[mid])
{
cout<<"\n Item found at position %d",mid+1;
  exit(0);
  break;
}
else if(a[mid]>item)
last=mid-1;
else beg=mid+1;
mid=(beg+last)/2;
}
}
  cout<<"\n Item not found";
return 0;
}
