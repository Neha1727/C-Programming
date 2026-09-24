#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a[5] = {5, 2, 8, 1, 3};
    int b[4] = {7, 4, 6, 9};
    int c[9];
    int i, j, temp;

    // First array copy
    for(i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    // Second array copy
    for(j = 0; j < 4; j++)
    {
        c[i] = b[j];
        i++;
    }

    // Sort merged array
    for(i = 0; i < 9 - 1; i++)
    {
        for(j = 0; j < 9 - i - 1; j++)
        {
            if(c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    cout << "First Array: ";
    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nSecond Array: ";
    for(i = 0; i < 4; i++)
    {
        cout << b[i] << " ";
    }

    cout << "\nMerged and Sorted Array: ";
    for(i = 0; i < 9; i++)
    {
        cout << c[i] << " ";
    }

    getch();
}
