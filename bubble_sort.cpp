#include <iostream.h>
#include <conio.h>

void main()
{
    int a[5], i, j, temp;

    clrscr();

    cout << "Enter 5 values: ";

    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // Bubble Sort
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array: ";

    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    getch();
}