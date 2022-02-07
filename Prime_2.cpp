#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ull n;	
		cin >> n;
        ull max;
		while (n % 2 == 0)
		{
            max=2;
			n /= 2;
		}
		for (ull i = 3; i * i <= n; i += 2)
		{
			while (n % i == 0)
			{
				n /= i;
                 max=i;
			}
		}
		if (n > 2) max=n;
		cout << max << endl;
	}
	return 0;
}