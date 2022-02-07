#include <iostream>
#include <cmath>
using namespace std;

int check(long long n)
{
	long long sum = 0;
	for (long long i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		cout << check(n) << endl;
	}
}

// Input:
// 2
// 6
// 21
// Output:
// 1
// 0