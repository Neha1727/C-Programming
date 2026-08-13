#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j,num=1;
	clrscr();
	cout<<"Enter number :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<num<<"  ";
			num++;
		}
		cout<<"\n";
	}
	getch();
}