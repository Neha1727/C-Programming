#include<iostream.h>
#include<conio.h>
void main()
{
    int num, min, max;
    clrscr();
    cout << "Enter numbers (-999 to stop): ";
    cin >> num;

    if (num == -999)
    {
	cout << "No numbers entered.";
	getch();
	return;
    }

    min = max = num;

    while (num != -999)
    {
	cin >> num;

	if (num == -999)
	    break;

	if (num < min)
	    min = num;

	if (num > max)
	    max = num;
    }

    cout << "Minimum number = " << min << endl;
    cout << "Maximum number = " << max << endl;

    getch();
}