#include <iostream>
using namespace std;

int a[100001];
int F[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	F[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		F[i] = F[i - 1] + a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << F[i] << " ";
	}
}
