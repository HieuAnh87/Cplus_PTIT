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
		int n = s.length();
		int m = n;
		int i = 0;
		while (i >= 0 && i < n - 2)
		{
			if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')
			{
				s.erase(s.begin() + i);
				s.erase(s.begin() + i);
				s.erase(s.begin() + i);
				if (i == 0)
					i++;
				else
					i--;
				n = s.length();
			}
			else
				i++;
		}
		cout << m - s.length() << endl;
	}
}

// Cho xâu ký tự S chỉ bao gồm các ký tự ‘0’ và ‘1’. 
// Nhiệm vụ của bạn là loại bỏ các xâu con “100” trong S và đưa ra độ dài lớn nhất xâu con bị loại bỏ. Ví dụ S =” 1011110000” ta nhận được kết quả là 6 vì ta cần loại bỏ xâu “110000” có độ dài 6.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự nhị phân S được viết trên một dòng.
// T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤105.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 010010
// 1011110000
// Output:
// 3
// 6
