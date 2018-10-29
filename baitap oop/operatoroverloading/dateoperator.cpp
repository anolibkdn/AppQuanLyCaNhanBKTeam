#include <iostream>

using namespace std;

int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct dateoperator
{
    /* data */
    int d, m, y;
};

bool leapyear(int y)
{
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
    {
        return true;
    }
    return false;
}

istream &operator>>(istream &in, dateoperator &d)
{
    int k = 1;
    while (k)
    {
        cout << "Date >> ";
        in >> d.d;
        cout << "Month >> ";
        in >> d.m;
        cout << "Year >> ";
        in >> d.y;
        if(d.m == 2 && leapyear(d.y)==false && d.d > 28)
        {
            cout << "Erro in inputing data!Check again! :((" << endl;
            continue;
        }
        if ((d.d > 0 && d.d < 32) && (d.m > 0 && d.m < 13) && (d.y > 0))
        {
            k = 0;
        }
        else{
            cout << "Erro in inputing data! check again!" << endl;
        }
    }
    return in;
}

ostream &operator<<(ostream &out, const dateoperator &d)
{
    out << "(" << d.d << "," << d.m << "," << d.y << ")" << endl;
    return out;
}

dateoperator operator++(dateoperator &d)
{
    d.d += 1;
    if (d.m == 2 && leapyear(d.y) == true)
    {
        if (d.d > mon[d.m] + 1)
        {
            d.m += 1;
            d.d = 1;
        }
    }
    else
    {
        if (d.d > mon[d.m])
        {
            d.m += 1;
            d.d = 1;
            if (d.m > 12)
            {
                d.y += 1;
                d.m = 1;
            }
        }
    }
    return d;
}

dateoperator operator++(dateoperator &d, int)
{
    dateoperator d1;
    d1 = d;
    d.d += 1;
    if (d.m == 2 && leapyear(d.y) == true)
    {
        if (d.d > mon[d.m] + 1)
        {
            d.m += 1;
            d.d = 1;
        }
    }
    else
    {
        if (d.d > mon[d.m])
        {
            d.m += 1;
            d.d = 1;
            if (d.m > 12)
            {
                d.y += 1;
                d.m = 1;
            }
        }
    }
    return d1;
}

dateoperator operator--(dateoperator &d)
{
    d.d -= 1;
    if (d.d < 0)
    {
        d.d = 1;
        d.m -= 1;
        if (d.m < 0)
        {
            d.m = 12;
            d.y -= 1;
        }
    }
    return d;
}

dateoperator operator--(dateoperator &d, int)
{
    dateoperator d1 = d;
    d.d -= 1;
    if (d.d < 0)
    {
        d.d = 1;
        d.m -= 1;
        if (d.m < 0)
        {
            d.m = 12;
            d.y -= 1;
        }
    }
    return d1;
}

int main(int argc, char const *argv[])
{
    /* code */
    dateoperator d1, d2;
    cout << "-------------- INPUT DATE ---------------" << endl;
    cin >> d1;
    cout << d1;
    d2 = ++d1;
    cout << d2;
    cout << d1;
    d2 = d1++;
    cout << d2;
    cout << d1;
    return 0;
}
