#include<iostream.h>
#include<conio.h>
inline int max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter two numbers:";
	cin>>x>>y;
	z=max(x,y);
	cout<<"\nx="<<x<<"\ty="<<y<<"\tz="<<z;
	getch();
}