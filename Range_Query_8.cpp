#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005];
void slove()
{
	int x, y, s = 0, res;
	for (int i = 0; i < k; i++)
		s += a[i];
	x = 0, y = k - 1;
	res = s;
	for (int i = k; i < n; i++)
	{
		s -= a[i - k];
		s += a[i];
		if (res < s)
		{
			res = s;
			x = i - k + 1;
			y = i;
		}
	}
	for (int i = x; i <= y; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		slove();
	}
}


// Cho mảng A[] gồm n số và số nguyên dương k. Hãy tìm dãy con liên tục độ dài k có giá trị trung bình các phần tử lớn nhất. Ví dụ với A[] = { 1, 12, -5, -6, 50, 3} và k = 4 ta có câu trả lời là {12, -5, -6, 50} có trung bình các phần tử lớn nhất là (12-5-6+30)/4=7.75.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và số k; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ k≤n ≤103; -103≤ A[i]  ≤103.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5 2
// 10 4 5 15 20
// 4 2
// -12 34 56 7
// Output:
// 15 20
// 34 56