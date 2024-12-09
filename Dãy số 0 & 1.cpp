#include <iostream>
using namespace std;

int a[100001];
int b[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int num = a[i];
		if (num == 1)
		{
			cnt++;
		}
		else if (cnt >= 1 && a[i] == 0)
		{
			cout << cnt << " ";
			cnt = 0;
		}
	}
	if (cnt >= 1)
	{
		cout << cnt << " ";
	}
	cout << endl;
	int cnt2 = 0;
	for (int i = 0; i < n; i++)
	{
		int num = a[i];
		if (num == 0)
		{
			cnt2++;
		}
		else if (cnt2 >= 1)
		{
			cout << cnt2 << " ";
			cnt2 = 0;
		}
	}
	if (cnt2 >= 1)
	{
		cout << cnt2 << " ";
	}
}
