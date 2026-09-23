#include<iostream.h>
#include<conio.h>
void main()
{
    int avg, grade;
    clrscr();
    cout << "Enter average marks: ";
    cin >> avg;

    if (avg >= 70)
	grade = 1;
    else if (avg >= 60)
	grade = 2;
    else if (avg >= 50)
	grade = 3;
    else if (avg >= 40)
	grade = 4;
    else
	grade = 5;

    switch (grade)
    {
	case 1:
	    cout << "Distinction";
	    break;

	case 2:
	    cout << "First";
	    break;

	case 3:
	    cout << "Second";
	    break;

	case 4:
	    cout << "Pass";
	    break;

	case 5:
	    cout << "Try Again";
	    break;
    }

    getch();
}