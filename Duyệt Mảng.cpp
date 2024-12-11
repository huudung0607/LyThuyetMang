#include <iostream>
#include <cmath>
using namespace std;

int res[100001];
int a[100001];


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i+=2)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		cout << a[i] + a[i - 1] << " ";
	}

}
