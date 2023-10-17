// < Іваньо Іван >
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 0.6

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	int k, i;
	double S, P;
	P = 1;
	k = 1;
	
	while (k <= 15)
	{
		S = 0;
		i = 1;
		while (i <= k)
		{
			S += cos(i + k);
			i++;
		}
		P *= pow((1 + S), 2);
		k++;
	}

	cout << setprecision(5) << P << endl;

	P = 1;
	k = 1;

	do {
		S = 0;
		i = 1;

		do {
			S += cos(i + k);
			i++;
		} while (i <= k);

		P *= pow((1 + S), 2);
		k++;
	} while (k <= 15);

	cout << setprecision(5) << P << endl;

	P = 1;

	for (k = 1; k <= 15; k++)
	{
		S = 0;
		i = 1;

		for (i = 1; i <= k; i++)
		{
			S += cos(i + k);
		}

		P *= pow((1 + S), 2);
	}

	cout << setprecision(5) << P << endl;

	P = 1;
	i = 1;

	for (k = 15; k >= 1; k--)
	{
		S = 0;

		for (i = k; i >= 1; i--)
		{
			S += cos(i + k);
		}

		P *= pow((1 + S), 2);
	}

	cout << setprecision(5) << P << endl;

	return 0;
}
