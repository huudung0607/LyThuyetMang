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
	int pos = 0;
	while (pos <= n)
	{
		int num = a[pos];
		int sum = num;
		for (int i = pos + 1; i < n + 1; i++)
		{
			cout << sum << " ";
			int num1 = a[i];
			sum += num1;
		}
		pos++;
	}
}
