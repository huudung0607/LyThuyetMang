#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool dx = true;
	int l = 0, r = n - 1;
	while (l <= r)
	{
		if (a[l] != a[r])
		{
			dx = false;
		}
		l++;
		r--;
	}
	if (dx)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
