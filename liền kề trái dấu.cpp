#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (a[0] > 0 && a[1] < 0 || a[0] < 0 && a[1] > 0)
	{
		cout << a[0] << " ";
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > 0)
		{
			if (a[i + 1] < 0 || a[i - 1] < 0)
			{
				cout << a[i] << " ";
			}
		}
		else
		{
			if (a[i + 1] > 0 || a[i - 1] > 0)
			{
				cout << a[i] << " ";
			}
		}
	}
	if (a[n - 1] > 0 && a[n -2] < 0 || a[n - 1] < 0 && a[n-2] > 0)
	{
		cout << a[n - 1] << " ";
	}
	delete[] a;
}
