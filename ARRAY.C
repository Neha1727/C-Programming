#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter number arr[%d]:",i,arr[i]);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\narr[%d]= %d",i,arr[i]);
	}
	getch();
}