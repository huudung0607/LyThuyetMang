#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int const mod = 1000000000 + 7;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	long long multiply = 1;
	for (int i = 0; i < n; i++)
	{
		sum =(sum + a[i]) % mod;
		multiply = (multiply * a[i]) % mod;
	}
	cout << (long long)(sum) << endl;
	cout << (long long)(multiply) << endl;
	delete[] a;
}
