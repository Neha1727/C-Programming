#include <iostream.h>
#include <conio.h>

int isPrime(int n, int i)
{
    if(n < 2)
        return 0;

    if(i * i > n)
        return 1;

    if(n % i == 0)
        return 0;

    return isPrime(n, i + 1);
}

void main()
{
    int n;

    clrscr();

    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n, 2))
        cout << "\n" << n << " is a Prime Number";
    else
        cout << "\n" << n << " is Not a Prime Number";

    getch();
}