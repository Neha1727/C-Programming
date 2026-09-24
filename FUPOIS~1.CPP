#include <iostream.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    clrscr();

    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore swapping:";
    cout << "\nFirst number = " << x;
    cout << "\nSecond number = " << y;

    swap(&x, &y);

    cout << "\n\nAfter swapping:";
    cout << "\nFirst number = " << x;
    cout << "\nSecond number = " << y;

    getch();
}