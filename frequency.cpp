#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a[10], n, i, j, count;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\nFrequency of each element:\n";

    for(i = 0; i < n; i++)
    {
        count = 1;

        // Check if element was already counted
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                count = 0;
                break;
            }
        }

        if(count != 0)
        {
            count = 1;

            for(j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    count++;
                }
            }

            cout << a[i] << " = " << count << endl;
        }
    }

    getch();
}