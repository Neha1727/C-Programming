#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int a=5;
	clrscr();
	if(a==5)
	{
		cout<<a++<<" "<<++a + a++<<" "<<++a;
	}
	else
	{
		cout<<"null";

	}
	getch();
}