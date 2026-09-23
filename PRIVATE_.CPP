//example of class(private member function)(nesting of member function)
#include<iostream.h>
#include<conio.h>
class Demo
{
	int a;
	float b;
	char c;
	void get();
	public:
		void put()
		{
			get();
			cout<<"\na="<<a;
			cout<<"\nb="<<b;
			cout<<"\nc="<<c;
		}
};
void Demo::get()
{
	cout<<"Enter an int,float and a char:";
	cin>>a>>b>>c;
}
void main()
{
	Demo d1;
	clrscr();
	//d1.get();
	d1.put();
	getch();
}