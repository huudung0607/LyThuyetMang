#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int prime(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i ==0)
		{
			return 0;
		}
	}
	return 1;
}

int sum_prime(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if (prime(sum))
	{
		return 1;
	}
	return 0;
}

int thuannghich(int n)
{
	int sum = 0;
	int temp = n;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	return 0;
}

int chinhphuong(int n)
{
	if ((int)sqrt(n) * (int)sqrt(n) == n)
	{
		return 1;
	}
	return 0;
}

int a[100001];
int main() {
	int n;
	cin >> n;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (prime(a[i]))
		{
			c1++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (thuannghich(a[i]))
		{
			c2++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (chinhphuong(a[i]))
		{
			c3++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (sum_prime(a[i]))
		{
			c4++;
		}
	}
	cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl;
}
