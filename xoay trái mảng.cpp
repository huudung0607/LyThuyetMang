#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int a[1000001];
int b[1000001];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	k = k % n;
	for (int i = 0; i < k; i++)
	{
		b[cnt++] = a[i];
	}
	for (int i = k; i < n; i++)
	{
		a[i - k] = a[i];
	}
	for (int i = n - k; i < n; i++)
	{
		a[i] = b[i - (n - k)];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
