#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	cout<<"Enter value of a :";
	cin>>a;
	cout<<"Enter value of b :";
	cin>>b;
	cout<<"Before swap value a :"<<a<<endl;
	cout<<"Before swap value b :"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swap value a :"<<a<<endl;
	cout<<"After swap value b :"<<b<<endl;
	getch();
}
