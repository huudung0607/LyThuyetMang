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
		mark[a[i]]++;
		max_val = max(max_val, a[i]);
	}
	for (int i = 0; i < max_val + 1; i++)
	{
		if (mark[i] != 0)
		{
			cout << i << "  " << mark[i] << endl;
		}
	}
}
