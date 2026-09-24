#include <iostream.h>
#include <conio.h>

int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

void main()
{
    clrscr();

    int base, exp, result;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exp;

    result = power(base, exp);

    cout << "Power = " << result;

    getch();
}