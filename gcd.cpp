#include <iostream.h>
#include <conio.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void main()
{
    int a, b, result;

    clrscr();

    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = gcd(a, b);

    cout << "\nGCD = " << result;

    getch();
}