#include <iostream>
#include <cmath>
using namespace std;

int res[1000001];
int a[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cntc = 0;
	int cntl = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cntc++;
		}
		else
		{
			cntl++;
		}
	}
	cout << (long long)cntc * (cntc - 1) / 2 + (long long)cntl * (cntl - 1) / 2;

}
