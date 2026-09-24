#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a, b, temp;
    int *p, *q;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    p = &a;
    q = &b;

    cout << "\nBefore swapping:";
    cout << "\nA = " << a;
    cout << "\nB = " << b;

    temp = *p;
    *p = *q;
    *q = temp;

    cout << "\n\nAfter swapping:";
    cout << "\nA = " << a;
    cout << "\nB = " << b;

    getch();
}