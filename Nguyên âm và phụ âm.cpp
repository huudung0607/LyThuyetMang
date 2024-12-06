#include <iostream>
#include <cmath>

using namespace std;
char a[1000001];
char b[1000001];
char c[1000001];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = tolower(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 'u' || a[i] == 'a' || a[i] == 'o' || a[i] == 'i' || a[i] == 'e')
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == 'u' || a[i] == 'a' || a[i] == 'o' || a[i] == 'i' || a[i] == 'e')
		{
			continue;
		}
		else
		{
			cout << a[i] << " ";
		}
	}
}
