#include <iostream.h>
#include <conio.h>

void power(int x, int y = 2);

void main()
{
    clrscr();

    power(5);

    getch();
}

void power(int x, int y)
{
    int p = 1;

    for(int i = 1; i <= y; i++)
        p = p * x;

    cout << p;
}