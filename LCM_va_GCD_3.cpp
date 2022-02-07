#include <iostream>
#include <cmath>

using namespace std;

int ucln(int a, int b) {
	if (a == 0 || b == 0) { return a + b; }
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n, g;
		cin >> n;
		int a[60];
		long long h = 1;
		long long z = 1;
		int m = pow(10, 9) + 7;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			h = (h * a[i]) % m;
			if (i == 0) {
				g = a[i];
			}
			else {
				g = ucln(g, a[i]);
			}
		}
		for (long long j = 1; j <= g; j++) {
			z = (h * z) % m;
		}
		cout << z << endl;
	}
}