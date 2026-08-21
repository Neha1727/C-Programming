#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter number arr["<<i+1<<"]:";
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<endl<<"Arr["<<i<<"]="<<arr[i];
	}
	getch();
}