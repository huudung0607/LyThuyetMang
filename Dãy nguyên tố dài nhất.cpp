#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int prime[10000001];
void seive()
{
	for (int i = 0; i <= 10000000; i++)
	{
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(10000000); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 10000000; j += i)
			{
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	seive();
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxlen = 0;
	int maxsum = 0;
	int len = 0;
	int tong = 0;
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (prime[a[i]])
		{
			len++;
			tong += a[i];
		}
		else
		{
			len = 0;
			tong = 0;
		}
		if (len > maxlen)
		{
			maxlen = len;
			maxsum = tong;
			index = i - maxlen + 1;
		}
		if (len == maxlen)
		{
			if (tong > maxsum)
			{
				maxsum = tong;
				maxlen = len;
				index = i - maxlen + 1;
			}
		}
	}
	if (index == -1)
	{
		cout << "NOT FOUND" << endl;
	}
	else
	{
		cout << maxlen << endl;
		for (int i = 0; i < maxlen; i++)
		{
			cout << a[index + i] << " ";
		}
	}
}
