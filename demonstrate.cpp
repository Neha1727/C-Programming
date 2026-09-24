#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int num = 25;
    int *ptr;

    ptr = &num;

    cout << "Value of num = " << num;
    cout << "\nAddress of num = " << &num;
    cout << "\nValue stored in pointer = " << ptr;
    cout << "\nValue using pointer = " << *ptr;

    getch();
}