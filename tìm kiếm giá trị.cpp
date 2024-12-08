#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[1000001];
int mark[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int max_val = -100000;
	for (int i = 0; i < n; i++)
	{
		mark[a[i]] = 1;
		max_val = max(max_val, a[i]);
	}
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		if (mark[x] == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
