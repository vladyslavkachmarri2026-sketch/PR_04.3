#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, xp, xk, dx, F, x;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        // Перевірка умов для табулювання
        if (x < 0.6 && (b + c != 0))
        {
            F = a * x * x + b * b + c;
        }
        else if (x > 0.6 && (b + c == 0))
        {
            F = (x - a) / (x - c);
        }
        else
        {
            F = (x / c) + (x / a);
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}