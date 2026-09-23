//static member function
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
		static void disp()
		{
			//cout<<"\na="<<a;
			cout<<"\nb="<<b;
		}
};
int A::b=10;
void main()
{
	A a1,a2,a3;
	clrscr();
	a1.get();//10 11
	a1.put();
	a2.get();//20 12
	a2.put();
	a1.disp();
	a3.get();//30 13
	a3.put();
	a1.put();//10 13
	A::disp();//13
	getch();
}