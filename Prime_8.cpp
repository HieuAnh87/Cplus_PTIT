
#include <bits/stdc++.h>
using namespace std;
int n, p;
int slove()
{
	int s = 0;
	while (n)
	{
		n /= p;
		s += n;
	}
	return s;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> p;
		cout << slove() << endl;
	}
}


// Input: 
// 3
// 62 7
// 76 2
// 3 5
// Output:
// 9
// 73
// 0