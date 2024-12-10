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
		a[i] = abs(a[i]);
		while (a[i])
		{
			int last = a[i] % 10;
			res[last]++;
			a[i] /= 10;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << " " << res[i] << endl;
	}
}
