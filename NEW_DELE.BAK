#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	float *p,sum=0,*q;
	int n,i;
	clrscr();
	cout<<"Enter n:";
	cin>>n;
	p=new float[n];
	q=p;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Value-"<<i+1<<":";
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<endl<<*p;
		sum+=*p;
		p++;
	}
	cout<<"\nSum="<<sum;
	delete []p;
	getch();
}