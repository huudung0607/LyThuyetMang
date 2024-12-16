#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int q;
	cin >> q;
	for (int k = 1; k <= q ;k++)
	{
		int n;
		cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int len = 1, maxlen = 1;
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i - 1])
			{
				len++;
			}
			else
			{
				maxlen = max(maxlen, len);
				len = 1;
			}
		}
		maxlen = max(maxlen, len);
		cout << "Test #" << k << " " << ":" << endl;
		cout << maxlen << endl;
		len = 1;
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i -1])
			{
				len++;
			}
			else
			{
				if (len == maxlen)
				{
					vector<int> res;
					for (int j = i - len; j < i; j++)
					{
						res.push_back(a[j]);
					}
					for (auto x : res)
					{
						cout << x << " ";
					}
					cout << endl;
				}
				len = 1;
			}
		}
		if (len == maxlen)
		{
			vector<int> res;
			for (int j = n - len; j < n; j++)
			{
				res.push_back(a[j]);
			}
			for (auto x : res)
			{
				cout << x << " ";
			}
			cout << endl;
		}
	}
}
