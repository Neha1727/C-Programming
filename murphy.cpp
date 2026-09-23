#include<iostream.h>
#include<conio.h>
void main()
{
    int n, square, temp, divisor = 1;
    clrscr();
    cout << "Enter a number: ";
    cin >> n;

    square = n * n;
    temp = n;

    // Find the divisor based on number of digits
    while (temp > 0) {
	divisor *= 10;
	temp /= 10;
    }

    if (square % divisor == n)
	cout << n << " is a Murphy number.";
    else
	cout << n << " is not a Murphy number.";

    getch();
}