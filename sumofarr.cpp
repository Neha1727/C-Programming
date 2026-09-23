#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], n, i, sum=0;

    clrscr();

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements:\n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }

    cout<<"Sum of elements = "<<sum;

    getch();
}