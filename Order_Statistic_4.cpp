#include<iostream>
#include<algorithm>
using namespace std;
/*
    quy hoach dong 
    dp[i] = a[i] + max(dp[i-2] , dp[i-3]); voi i >= 3.
    res = max{dp[i]} ( 0 <= i < n );
*/
const int maxN = 1e5+5;
long long n,a[maxN];
void input(){
    cin >> n ;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}
void solve(){
    if ( n == 1 )
        cout << a[0] << endl;
    else if ( n == 2 )
        cout << max(a[0],a[1]) << endl;
    else{
        long long dp[n+5];
        dp[0] = a[0] ;
        dp[1] = a[1] ;
        dp[2] = a[0] + a[2];
        for(int i = 3 ; i < n ; i++)
            dp[i] = a[i] + max(dp[i-2],dp[i-3]);
        long long res = 0;
        for(int i = 0 ; i < n ; i++)
            res = max(dp[i],res);
        cout << res << endl;
    }
}
int main(){
    int t=1; 
    cin>>t; 
    while(t--){ 
        input();
        solve();
    }
    return 0;
}


// Cho mảng A[] gồm n số nguyên dương. Hãy tìm tổng lớn nhất của dãy con thỏa mãn ràng buộc không có hai phần tử kề nhau thuộc một dãy con. Ví dụ với mảng A[] = {3, 2, 7, 10} ta nhận được kết quả là 13 = 10 + 3. Với mảng A[] = {3, 2, 5, 10, 7} ta có kết quả là 15 = 3 + 5 +7.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤105; 1≤ A[i] ≤105;
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 6
// 5  5  10  100  10  5
// 3
// 1  20  3
// Output:
// 110
// 20

