#include <iostream>
using namespace std;

int a[100001];
int F[100001];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += a[i];
	}
	cout << sum << " ";
	k++;
	int pos = 1;
	while (k <= n)
	{
		int sum = 0;
		for (int i = pos; i < k; i++)
		{
			sum += a[i];
		}
		cout << sum << " ";
		k++;
		pos++;
	}
}
