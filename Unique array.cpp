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
	int cnt = 0;
	b[cnt++] = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
		{
			b[cnt++] = a[i];
		}
	}
	for (int i = 0; i < cnt; i++)
	{
		cout << b[i] << " ";
	}
}
