
#include <iostream>
#include <cstdarg>

using namespace std;

double sumNumbers(const char types[], ...)
{
    double sum = 0;

    va_list args;
    va_start(args, types);

    for (int i = 0; types[i] != '\0'; i++)
    {
        if (types[i] == 'i')
        {
            sum += va_arg(args, int);
        }
        else if (types[i] == 'd' || types[i] == 'f')
        {
            sum += va_arg(args, double);
        }
    }

    va_end(args);

    return sum;
}

#define SUM(...) sumNumbers(__VA_ARGS__)

#ifndef UNIT_TEST
int main()
{
    int n;
    double total = 0;

    cout << "Enter number of values: ";
    cin >> n;

    if (n < 1)
        return 1;

    for (int i = 0; i < n; i++)
    {
        char type;

        cout << "Type (i - int, d - double, f - float): ";
        cin >> type;

        if (type == 'i')
        {
            int a;
            cout << "Enter number: ";
            cin >> a;

            total += SUM("i", a);
        }
        else if (type == 'd')
        {
            double a;
            cout << "Enter number: ";
            cin >> a;

            total += SUM("d", a);
        }
        else if (type == 'f')
        {
            float a;
            cout << "Enter number: ";
            cin >> a;

            total += SUM("f", a);
        }
        else
        {
            cout << "Unknown type. Try again.\n";
            i--;
        }
    }

    cout << "Sum = " << total << endl;

    return 0;
}
#endif
