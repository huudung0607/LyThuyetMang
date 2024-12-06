#include <iostream>
#include <math.h>
using namespace std;

long long fibonacci(long long n) {
	if (n == 0 || n == 1)
	{
		return 1;
	}
	long long fn_1 = 1, fn_2 = 0, fn = 0;
	for (int i = 2; i < 93; i++)
	{
		fn = fn_1 + fn_2;
		if (fn == n)
		{
			return 1;
		}
		fn_2 = fn_1;
		fn_1 = fn;
	}
	return 0;
}
int main() {
	long long n;
	cin >> n;
	long long* a = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (fibonacci(a[i]))
		{
			found = true;
			cout << a[i] << " ";
		}
	}
	if (found == false)
	{
		cout << "NONE";
	}
	delete[] a;
}
