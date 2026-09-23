//example of function overloading
#include<iostream.h>
#include<conio.h>
int add(int x,int y);
int add(int x,int y,int z);
void main()
{
	int a,b,c,d;
	clrscr();
	cout<<"\nEnter three numbers:";
	cin>>a>>b>>c;
	d=add(a,b);
	cout<<"\nSum of two argument function:"<<d;
	d=add(a,b,c);
	cout<<"\nSum of three argument function:"<<d;
	getch();
}
int add(int x,int y)
{
	return (x+y);
}
int add(int x,int y,int z)
{
	return(x+y+z);
}