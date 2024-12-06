#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int max = INT_MIN;
	int min = INT_MAX;
	int index_min = -1;
	int index_max = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (max == a[i])
		{
			index_max = i;
			break;
		}
	}
	for (int i = n - 1; i >=0 ; i--)
	{
		if (min == a[i])
		{
			index_min = i;
			break;
		}
	}
	cout << index_min << " " << index_max;
	delete[] a;
}
