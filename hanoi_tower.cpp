#include <iostream.h>
#include <conio.h>

void hanoi(int n, char from, char to, char aux)
{
    if(n == 1)
    {
        cout << "Move disk 1 from " << from
             << " to " << to << "\n";
        return;
    }

    hanoi(n - 1, from, aux, to);

    cout << "Move disk " << n << " from " << from
         << " to " << to << "\n";

    hanoi(n - 1, aux, to, from);
}

void main()
{
    int n;

    clrscr();

    cout << "Enter number of disks: ";
    cin >> n;

    cout << "\nSteps to solve Tower of Hanoi:\n";

    hanoi(n, 'A', 'C', 'B');

    getch();
}