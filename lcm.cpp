#include <iostream.h>
#include <conio.h>

void main()
{
    int a, b, max, lcm;

    clrscr();

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a > b)
        max = a;
    else
        max = b;

    lcm = max;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
            break;

        lcm++;
    }

    cout << "\nLCM = " << lcm;

    getch();
}