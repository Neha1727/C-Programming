//example of function with default argument
#include<iostream.h>
#include<conio.h>
int add(int x, int y=20);
void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter two numbers:";
	cin>>x>>y;
	z=add(x,y);
	cout<<"\nSum without default:"<<z;
	z=add(x);
	cout<<"\nsum with default:"<<z;
	getch();
}
int add(int x,int y)
{
	return(x+y);
}