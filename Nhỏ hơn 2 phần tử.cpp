#include <iostream>
#include <cmath>
using namespace std;

int res[100001];
int a[100001];


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
		{
			res[cnt++] = a[i];
		}
	}
	for (int i = 0; i < cnt; i++)
	{
		cout << res[i] << " ";
	}
}
