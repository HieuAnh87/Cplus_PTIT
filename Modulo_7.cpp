#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	while (test--) {
		int n;
		cin >> n;
		int arr[100000];
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int hieu = arr[n - 1] - arr[0];
		for (int i = 1; i <= hieu; i++) {
			if (hieu % i == 0) {
				int mod = arr[0] % i;
				int dem = 1;
				for (int j = 1; j < n; j++) {
					if (arr[j] % i == mod) { dem++; }
				}
				if (dem == n) { count++; }
			}
		}
		cout << count << endl;
	}
	return 0;
}