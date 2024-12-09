#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
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
	int maxval = 0;
	for (int i = 0; i < n; i++)
	{
		mark[a[i]]++;
		maxval = max(maxval, mark[a[i]]);
	}
	for (int i = 0; i < n; i++)
	{
		if (mark[a[i]] == maxval)
		{
			cout << a[i] << " " << mark[a[i]];
			break;
		}
	}
}
