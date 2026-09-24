#include <iostream.h>
#include <conio.h>
#include <string.h>

int palindrome(char str[], int start, int end)
{
    if(start >= end)
        return 1;

    if(str[start] != str[end])
        return 0;

    return palindrome(str, start + 1, end - 1);
}

void main()
{
    char str[100];
    int len;

    clrscr();

    cout << "Enter a string: ";
    cin >> str;

    len = strlen(str);

    if(palindrome(str, 0, len - 1))
        cout << "\n" << str << " is a Palindrome";
    else
        cout << "\n" << str << " is Not a Palindrome";

    getch();
}