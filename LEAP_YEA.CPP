#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int year;
	clrscr();
	cout<<"Enter Year:";
	cin>>year;
	if(year%4==0)
	{
		cout<<year<<" is Leap Year";
	}
	else
	{
		cout<<year<<" is Not Leap Year";
	}
	getch();
}