#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int num = 50;
    int *p;
    int **pp;

    p = &num;
    pp = &p;

    cout << "Value of num = " << num;
    cout << "\nValue using pointer = " << *p;
    cout << "\nValue using double pointer = " << **pp;

    getch();
}