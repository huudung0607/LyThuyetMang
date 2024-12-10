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
	bool found = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 28)
		{
			cout << a[i] << " ";
			found = false;
		}
	}
	if (found)
	{
		cout << "EMPTY" << endl;
	}
}
