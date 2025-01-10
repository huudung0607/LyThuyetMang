#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
using namespace std;
int a[505][505];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	map<long long, long long> res;
	for (int i = 0; i < n; i++)
	{
		if (v[i] == 0)
		{
			res[v[i]]++;
		}
		while (v[i])
		{
			int r =  v[i] % 10;
			res[r]++;
			v[i] /= 10;
		}
	}
	for (auto x : res)
	{
		cout << x.first << " " << x.second << endl;
	}
}
