#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

char res[7] = { '2','8','t','e','c','h'};
int main()
{
	int n;
	cin >> n;
	vector <char> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int temp = 0;
	for (int i = 0; i < n; i+=2)
	{
		if (a[i] == res[temp])
		{
			temp++;
			if (temp == 6)
			{
				break;
			}
		}
	}
	if (temp == 6)
	{
		cout << "28TECH" << endl;
	}
	else
	{
		cout << "HCET82" << endl;
	}
}
