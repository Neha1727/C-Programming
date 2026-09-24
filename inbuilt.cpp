#include <iostream.h>
#include <conio.h>

void main()
{
    char str[100];
    int i, length = 0;

    clrscr();

    cout << "Enter a string: ";
    cin >> str;

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    cout << "\nLength of string = " << length;

    getch();
}