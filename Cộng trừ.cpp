#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int a[1000001];
int b[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		cin >> b[i];
	}
	int sum = a[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (b[i] == 1)
		{
			sum = sum + a[i + 1];
		}
		else if (b[i] == 2)
		{
			sum -= a[i + 1];
		}
	}
	cout << sum << endl;
}
