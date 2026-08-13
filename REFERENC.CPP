//example of reference variable

#include<iostream.h>
#include<conio.h>
int & max(int &,int &);
void main()
{
	int a=100;
	clrscr();
	int & b=a; //reference variable
	cout<<"\na= "<<a<<"\t b="<<b;
	a+=100;
	cout<<"\na= "<<a<<"\t b="<<b;
	b-=50;
	cout<<"\na= "<<a<<"\t b="<<b;

	int m=10,n=20,p=30;
	m=max(n,p);
	cout<<"\nm="<<m<<"\t n="<<n<<"\t p="<<p;

	int x=10,y=20,z=30;
	max(x,y)=z;
	cout<<"\nx="<<x<<"\t y="<<y<<"\t z="<<z;
	getch();
}
int & max(int &a,int &b)
{
	if(a>b)
		return a;
	else
		return b;
}