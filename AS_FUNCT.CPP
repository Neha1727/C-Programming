//object as function argument
#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter two numbers:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\na="<<a<<"\tb="<<b;
		}
		void swap1(A a1)//pass by value
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap2(A & a1)//pass by reference
		{
			int c=a1.a;
			a1.a=a1.b;
			a1.b=c;
		}
		void swap3(A * a1)//pass by pointer
		{
			int c=a1->a;
			a1->a=a1->b;
			a1->b=c;
		}
		void swap4(const A & a1)//pass by constant reference
		{
			cout<<"\na="<<a1.a<<"\tb="<<a1.b;
		}
		void swap5(const A *a1)//pass by const pointer
		{
			cout<<"\na="<<a1->a<<"\tb="<<a1->b;
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	a1.swap1(a1);
	cout<<"\nAfter swap1 Pass By Value:";
	a1.put();
	a1.swap2(a1);
	cout<<"\nAfter swap2 Pass By Reference:";
	a1.put();
	a1.swap3(&a1);
	cout<<"\nAfter swap3 Pass By Pointer:";
	a1.put();
	a1.swap4(a1);
	cout<<"\nAfter swap4 Pass By Const Reference:";
	a1.put();
	a1.swap5(&a1);
	cout<<"\nAfter swap5 Pass By const Pointer:";
	a1.put();
	getch();
}