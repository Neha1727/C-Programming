#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int no;
	clrscr();
	cout<<"Enter number:";
	cin>>no;
	if(no%2==0)
	{
		cout<<no<<" is Even";
	}
	else
	{
		cout<<no<<" is Odd";
	}
	getch();
}