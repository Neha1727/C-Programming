#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a[5] = {5, 2, 8, 1, 3};
    int i, j, temp;

    cout << "Original Array: ";

    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // Bubble Sort
    for(i = 0; i < 5 - 1; i++)
    {
        for(j = 0; j < 5 - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Array: ";

    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    getch();
}
