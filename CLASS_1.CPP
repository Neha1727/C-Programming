//example of class
#include<iostream.h>
#include<conio.h>
class Demo
{
	private:
		int a;
		float b;
		char c;
	public:
		void get()
		{
			cout<<"Enter an int ,a float and a char:";
			cin>>a>>b>>c;
		}
		void put();
};
void Demo::put()
{
	cout<<"\na="<<a;
	cout<<"\nb="<<b;
	cout<<"\nc="<<c;
}
void main()
{
	Demo d1;
	clrscr();
	d1.get();
	d1.put();
	//cout<<"\na="<<d1.a;
	getch();
}