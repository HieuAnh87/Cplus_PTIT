#include <iostream>
#include<cmath>
using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return false;
	return true;
}

int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
        cin >> n;
		for(int i=1; i<=n; i++){
			if(snt(i))
			cout << i <<" ";
		}
		cout << endl;
    }
	return 0;
}

// Input:
// 2
// 10
// 35
// Output:
// 2  3  5  7
// 2  3  5  7  11  13  17  19  23  29  31