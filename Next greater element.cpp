#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;
#define ll long long;
int a[100001];
int res[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		bool found = false;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				cout << a[j] << " ";
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << -1 << " ";
		}
	}
}
