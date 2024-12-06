#include <iostream>
#include <math.h>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[n - 1] << " " << a[n - 2];
	delete[] a;
}
