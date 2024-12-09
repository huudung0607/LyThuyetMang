#include <iostream>
using namespace std;

int a[100001];
int main()
{
	int demc = 0;
	int deml = 0;
	int n;
	while (cin >> n)
	{
		if (n % 2 == 0)
		{
			demc++;
		}
		else
		{
			deml++;
		}
	}
	if (demc > deml)
	{
		cout << "CHAN" << endl;
	}
	else if (demc < deml)
	{
		cout << "LE" << endl;
	}
	else
	{
		cout << "CHANLE" << endl;
	}
}
