//static member variable
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	static int b;
	public:
		void get()
		{
			cout<<"\nEnter a:";
			cin>>a;
			b++;
		}
		void put()
		{
			cout<<"\na="<<a<<"\tb="<<b;
		}
};
int A::b;
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();//10 1
	a1.put();
	a2.get();//20 2
	a2.put();
	a3.get();//30 3
	a3.put();
	a1.put();//10 3
	getch();
}