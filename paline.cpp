#include<iostream.h>
#include<conio.h>
void main()
{
    int n, original, reverse = 0, digit;
    clrscr();
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
	digit = n % 10;
	reverse = reverse * 10 + digit;
	n = n / 10;
    }

    if (original == reverse)
	cout << "Palindrome";
    else
	cout << "Not Palindrome";

    getch();
}