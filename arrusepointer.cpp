#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr;

    cout << "Array elements are:\n";

    for(i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    getch();
}