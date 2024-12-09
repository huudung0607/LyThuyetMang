#include <iostream>
using namespace std;

int a[100001];

int main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int pos = -1;
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			found = true;
			pos = i;
			break;
		}
	}
	if (!found)
	{
		cout << "NOT FOUND" << endl;
	}
	else
	{
		for (int i = pos; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}
		n--;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
}
