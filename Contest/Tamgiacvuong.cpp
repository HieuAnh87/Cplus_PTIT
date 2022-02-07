//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (long long i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
string solution(long long a[], long long n){
    for (int i = n - 1; i >= 2; i--) {
        int l = 0, r = i - 1;
        while (l < r) {
            if (a[l] + a[r] == a[i])
                return "YES";
            if(a[l] + a[r] < a[i]){
                l++;
            }else
                r--;
        }
    }
    return "NO";
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        input(a, n);
        for (long long i = 0; i < n;i++){
            a[i] *= a[i];
        }
        sort(a, a + n);
        cout << solution(a, n) << endl;
    }   
}

// Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn  a2 + b2 = c2 thì đó là ba cạnh của một tam giác vuông.
// Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.
// Dữ liệu vào:
// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
// Mỗi test gồm số nguyên N (1≤ N ≤5000).
// Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 109).
// Kết quả: 
// Với mỗi test, in ra trên một dòng “YES” nếu tìm được, và “NO” trong trường hợp ngược lại.
// Ví dụ:
// Input
// 2
// 5
// 3 1 4 6 5
// 3
// 1 1 1
// Output:
// YES
// NO