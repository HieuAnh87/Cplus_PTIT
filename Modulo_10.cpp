#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;

long long solution(int n, int a[], int x){
    long long res = a[n-1];
    long long k = 1;
    for (int i = n - 2; i >= 0;i--){
        k = (k * x) % mod;
        res = (res + a[i] * k) % mod;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        cout << solution(n, a, x) << endl;
    }
}   

// Tính toán giá trị đa thức P(n, x) = an-1xn-1 + an-2xn-2 +..+ a0. 

// Kết quả có thể rất lớn nên hãy chia dư cho 109 + 7

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi test gồm hai dòng: dòng thứ nhất đưa vào hai số n, x; dòng tiếp theo đưa vào n số an-1, an-2, .., a0 là hệ số của đa thức P. Các số được viết cách nhau một vài khoảng trống.
// T, n, x, P[i]  thỏa mãn ràng buộc : 1≤T≤100; 0≤n≤2000; 0≤ x, P[i] ≤1000.
// Chú ý: Các hệ số của đa thức P được viết theo thứ tự từ bậc 0 đến bậc n-1 
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:

// 1
// 4  2

// 1  2  0  4
//  Output:

// 20

