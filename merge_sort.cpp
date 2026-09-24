#include <iostream.h>
#include <conio.h>

void main()
{
    int a[5], b[5], c[10];
    int i, j, temp;

    clrscr();

    cout << "Enter 5 values for first array: ";
    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter 5 values for second array: ";
    for(i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    // Merge two arrays
    for(i = 0; i < 5; i++)
        c[i] = a[i];

    for(i = 0; i < 5; i++)
        c[i + 5] = b[i];

    // Sort merged array
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    cout << "\nMerged and Sorted Array: ";

    for(i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

    getch();
}