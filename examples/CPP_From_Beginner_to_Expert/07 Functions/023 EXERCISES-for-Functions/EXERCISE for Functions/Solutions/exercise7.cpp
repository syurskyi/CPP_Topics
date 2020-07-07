#include <iostream>
#include <cstdlib>

using namespace std;

double minValue(double tab[]);
double maxValue(double tab[]);


int main ()
{
    double tab[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Input " << i+1 << " number: ";
        cin >> tab[i];
    }

    cout << "The minimum value was: " << minValue(tab) << endl;
    cout << "The maximum value was: " << maxValue(tab) << endl;

    return 0;
}

double minValue(double tab[])
{
    double minValue = tab[0];

    for (int i = 1; i < 5; i++)
    {
        if (minValue > tab[i])
            minValue = tab[i];

    }

    return minValue;
}
double maxValue(double tab[])
{
    double maxValue = tab[0];

    for (int i = 1; i < 5; i++)
    {
        if (maxValue < tab[i])
            maxValue = tab[i];

    }

    return maxValue;
}
