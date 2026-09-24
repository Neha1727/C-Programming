#include <iostream.h>
#include <conio.h>

int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

void main()
{
    int n, result;

    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    result = sum(n);

    cout << "\nSum of numbers from 1 to " << n
         << " = " << result;

    getch();
}