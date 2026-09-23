#include<iostream.h>
#include<conio.h>

void main()
{
    int a[10], n, i, temp;

    clrscr();

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements:\n";
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    cout<<"Reversed array:\n";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    getch();
}