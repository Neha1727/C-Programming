//parameterrized constructor(constructor with argument)
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		A(int x,int y) //perametrized constructor
		{
			cout<<"\nParameterized Constructor";
			a=x;
			b=y;
		}
		void put()
		{
			cout<<"\na="<<a<<"\tb="<<b;
		}
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter two numbers:";
	cin>>x>>y;
	//A a2;
	A a1(x,y);
	a1.put();
	getch();
}