#include <iostream>

using namespace std;
long long mulmod(long long a, long long b, long long mod)
{
    long long res = 0;
    a = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % mod;
        a = (a * 2) % mod;
        b /= 2;
    }
    return res % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << mulmod(a, b, c) << endl;
    }
}

// Cho ba số a, b, c có thể lớn cỡ 1016. Nhiệm vụ của bạn là tính (a*b)%c.
// Input:
// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi test trên một dòng đưa vào ba số a, b, c.
// T, a, b, c  thỏa mãn ràng buộc : 1≤T≤100; 0≤a, b, c≤1016.
// Output:
// Đưa ra số kết quả mỗi test theo từng dòng.
// Input:
// 1
// 8 4 5
// Output:
// 2