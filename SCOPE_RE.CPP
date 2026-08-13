#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int a=10;
void main()
{
	int a=100;
	{
		int a=1000;
		clrscr();
		cout<<"\n a="<<a;//1000
		cout<<"\n ::a="<<::a;//10
	}
	cout<<"\n a="<<a;//100
	cout<<"\n ::a="<<::a;//10
	getch();
}