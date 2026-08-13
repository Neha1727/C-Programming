//call by value and call by reference

#include<iostream.h>
#include<conio.h>

void swap(int , int); //call by value
void swap1(int* , int*); //call by reference
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter two numbers :";
	cin>>a>>b;
	cout<<"\n Before swap() a="<<a<<"\t b="<<b;
	swap(a,b);
	cout<<"\n after swap() a="<<a<<"\t b="<<b;
	cout<<"\n Before swap1() a="<<a<<"\t b="<<b;
	swap1(&a,&b);
	cout<<"\n after swap1() a="<<a<<"\t b="<<b;
	getch();
}
void swap(int a , int b)
{
	int c=a;
	a=b;
	b=c;
	cout<<"\n Inside swap() a="<<a<<"\t b="<<b;
}
void swap1(int *a , int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"\n Inside swap1() a="<<*a<<"\t b="<<*b;
}

