#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int a[1000001];
int b[1000001];
int main()
{
	int n, m, p;
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	for (int i = n - 1; i >= p; i--)
	{
		a[i + m] = a[i];
	}
	for (int i = 0; i < m; i++)
	{
		a[i + p] = b[i];
	}
	n = n + m;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
