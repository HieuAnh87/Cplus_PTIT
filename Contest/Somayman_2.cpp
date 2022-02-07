#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> s;
		int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			sum += (s[i] - '0');
		}
		if (sum == 9 || (sum % 9 == 0 && sum != 0))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}

// Một số nguyên không âm n được gọi là số may mắn nếu tổng các chữ của n bằng 9 hoặc tổng các chữ số của n là số may mắn. Ví dụ các số 9, 108, 279 là các số may mắn, còn các số 19, 289 không phải là số may mắn.

// Yêu cầu: Cho số nguyên không âm n, hãy kiểm tra xem n có phải là số may mắn hay không?

// Input
// Dữ liệu vào gồm nhiều bộ dữ liệu tương ứng với nhiều test. Dòng đầu tiên chứa một số nguyên dương không vượt quá 100 là số lượng các bộ dữ liệu. Các dòng tiếp theo chứa các bộ dữ liệu.

// Mỗi bộ dữ liệu gồm một dòng duy nhất chứa một số nguyên không âm n (n ≤ 10100).

// Output
// Với mỗi bộ dữ liệu, ghi ra trên một dòng câu trả lời, ghi số 1 nếu n là số may mắn, ghi số 0 trong trường hợp ngược lại.

// Example
// Input:
// 3
// 888
// 666
// 289

// Output:
// 0
// 1
// 0