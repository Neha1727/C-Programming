#include<iostream.h>
#include<conio.h>
void swap(int,int);
void swap1(int *,int *);

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"\nBefore swap() a="<<a<<"\tb="<<b;
	swap(a,b);
	cout<<endl;
	cout<<"After swap() a="<<a<<"\tb="<<b<<endl;
	cout<<"Before swap() a="<<a<<"\tb="<<b<<endl;
	cout<<"Before swap1() a="<<a<<"\tb="<<b<<endl;
	swap1(&a,&b);
	cout<<endl;
	cout<<"after swap1() a="<<a<<"\tb="<<b;
	getch();
}
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	cout<<"\nInside swap() a="<<a<<"\tb="<<b;
}
void swap1(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"\nInside swap1() a="<<*a<<"\tb="<<*b;
}