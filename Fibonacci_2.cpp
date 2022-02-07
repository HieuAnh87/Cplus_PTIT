#include<iostream>
using namespace std;
typedef unsigned long long  ll;

ll fibo(ll n){
    if(n==1||n==0||n==2||n==3) return n;
    ll f1=0,f2=1,f;
    while(f1+f2 <= n){
        f=f1+f2;
        f1=f2;
        f2=f;
    }
return f;
}

int main(){
    short t; cin >> t;
    while (t--){
    ll n;  cin >> n;
    if(fibo(n)==n) cout << "YES" << endl;
    else        cout << "NO" << endl;       
    }
    return 0;
}

// Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số Fibonacci hay không?
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương n.
// T, n thỏa mãn ràng buộc :1 ≤ T ≤ 100; 0≤n≤1018.
// Output:
// Đưa ra “YES” hoặc “NO” tương ứng với n là số Fibonacci hoặc không phải số Fibonacci của mỗi test theo từng dòng.
// Input
// 2
// 8
// 15
// Output
// YES
// NO