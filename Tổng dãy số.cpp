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
	int k = 2;
	int pos = 1;
	while (pos <= n)
	{
		for (int i = pos; i < n; i++)
		{
			int sum = a[i - 1];
			sum += a[i];
			cout << sum << " ";
			break;
		}
		pos++;
	}
	pos = 1;
	k = 3;
	cout << endl;
	while (pos <= n - 2)
	{
		int sum = a[pos - 1];
		for (int i = pos; i < k; i++)
		{
			sum += a[i];
		}
		cout << sum << " ";
		pos++;
		k++;
	}
	pos = 1;
	k = 4;
	cout << endl;
	while (pos <= n - 3)
	{
		int sum = a[pos - 1];
		for (int i = pos; i < k; i++)
		{
			sum += a[i];
		}
		cout << sum << " ";
		pos++;
		k++;
	}
}
