// Ambiguity Error in Function Overloading

#include<iostream.h>
#include<conio.h>

void sum(int a, float b);
void sum(float a, int b);

void main()
{
    clrscr();

    sum(10, 20);

    getch();
}

void sum(int a, float b)
{
    cout << "First function";
}

void sum(float a, int b)
{
    cout << "Second function";
}