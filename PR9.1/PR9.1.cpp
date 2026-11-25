#include <iostream>
#include <iomanip>
#include <cmath>

#include "var.h"
#include "sum.h"

using namespace std;

using namespace nsVar;
using namespace nsSum;

int main()
{
    cout << "x_p = ";
    cin >> x_p;

    cout << "x_k = ";
    cin >> x_k;

    cout << "dx = ";
    cin >> dx;

    cout << "e = ";
    cin >> e;

    // Перевірка введених даних
    if (dx <= 0 || e <= 0 || x_p > x_k)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    cout << endl;

    cout << "---------------------------------------------------------------" << endl;
    cout << "|     x     |       Sum       |       log       |      n      |" << endl;
    cout << "---------------------------------------------------------------" << endl;

    x = x_p;

    while (x <= x_k + dx * 1e-9)
    {
        if (fabs(x) > 1)
        {
            sum();

            cout << "| "
                << setw(9) << fixed << setprecision(4) << x << " | "
                << setw(15) << setprecision(10) << s << " | "
                << setw(15) << setprecision(10)
                << log((x + 1) / (x - 1)) << " | "
                << setw(11) << n << " |" << endl;
        }
        else
        {
            cout << "| "
                << setw(9) << fixed << setprecision(4) << x
                << " |      Outside convergence interval               |" << endl;
        }

        x += dx;
    }

    cout << "---------------------------------------------------------------" << endl;

    return 0;
}
