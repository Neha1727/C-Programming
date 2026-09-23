#include <iostream.h>
#include <conio.h>

class DB;

class DM
{
    int meter;
    float cm;

public:
    DM(int m = 0, float c = 0)
    {
        meter = m;
        cm = c;
    }

    DM operator+(DB d);
    void display()
    {
        cout << meter << " meter " << cm << " centimeter";
    }

    float totalCM()
    {
        return meter * 100 + cm;
    }
};

class DB
{
    int feet;
    float inch;

public:
    DB(int f = 0, float i = 0)
    {
        feet = f;
        inch = i;
    }

    DB operator+(DM d)
    {
        float totalInch;
        totalInch = (d.totalCM() / 2.54) + (feet * 12 + inch);

        int f = totalInch / 12;
        float i = totalInch - f * 12;

        return DB(f, i);
    }

    void display()
    {
        cout << feet << " feet " << inch << " inches";
    }

    float totalInch()
    {
        return feet * 12 + inch;
    }
};

DM DM::operator+(DB d)
{
    float totalCM;
    totalCM = d.totalInch() * 2.54 + meter * 100 + cm;

    int m = totalCM / 100;
    float c = totalCM - m * 100;

    return DM(m, c);
}

void main()
{
    clrscr();

    DM d1(5, 50);
    DB d2(10, 6);

    DM r1 = d1 + d2;
    DB r2 = d2 + d1;

    cout << "Distance in DM: ";
    r1.display();

    cout << "\nDistance in DB: ";
    r2.display();

    getch();
}