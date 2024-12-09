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
	int maxval = INT_MIN;
	int minval = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		maxval = max(maxval, a[i]);
		minval = min(minval, a[i]);
	}
	cout << minval << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == minval)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	cout << maxval << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == maxval)
		{
			cout << i << " ";
		}
	}

}
