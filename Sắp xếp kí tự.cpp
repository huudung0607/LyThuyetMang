#include <iostream>
#include <cmath>
using namespace std;

char a[1000001];
char res[7] = { '2','8','t','e','c','h'};
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (a[i] == res[i])
			{
				flag = true;
			}
		}
	}
	if (flag)
	{
		cout << "28TECH" << endl;
	}
	else
	{
		cout << "HCET82" << endl;
	}
}
