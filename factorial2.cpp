#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i;
	long long factorial=1;
	clrscr();
	cout<<"Enter number of factorial:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		factorial *=i;
	}
	cout<<"Factorial of="<<n<<" is "<<factorial;
	getch();
}