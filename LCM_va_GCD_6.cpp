#include <bits/stdc++.h>
using namespace std;
string check(long long a, long long b)
{
	while (a % b != 0)
	{
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	if (b == 1)
		return "Yes";
	else
		return "No";
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, b;
		cin >> a >> b;
		long long x = a * (a + 1) / 2;
		long long y = b;
		long long m = (x + y) / 2;
		long long n = abs(x - y) / 2;
		if (m + n == x)
		{
			cout << check(m, n) << endl;
		}
		else
			cout << "No" << endl;
	}
}