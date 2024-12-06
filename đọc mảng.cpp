#include <iostream>
#include <cmath>

using namespace std;
int a[1000001];
int main()
{
	int x;
	int n = 0;
	while (cin >> x)
	{
		a[n] = x;
		n++;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
}
