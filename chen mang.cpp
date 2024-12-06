#include <iostream>
#include <cmath>

using namespace std;
int a[100001];
int main()
{
	int n, x, k;
	cin >> n >> x >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = n; i >= k ; i--)
	{
		a[i + 1] = a[i];
	}
	n++;
	a[k] = x;
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
}
