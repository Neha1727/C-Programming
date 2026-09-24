#include <iostream.h>
#include <conio.h>

void main()
{
    int a[10], i, j;

    clrscr();

    cout << "Enter 10 values: ";

    for(i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "\nDuplicate elements are: ";

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] == a[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }

    getch();
}