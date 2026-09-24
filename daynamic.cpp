#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int n, i;
    int *arr;

    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamic memory allocation
    arr = new int[n];

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray elements are:\n";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    getch();
}