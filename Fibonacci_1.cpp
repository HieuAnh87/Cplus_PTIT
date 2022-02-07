#include<iostream>
#include<cmath>
using namespace std;
const long r=pow(10,9)+7;

int fibo(int n){
    if(n==1||n==0) return n;
    int f1=0,f2=1,f;
    for (int i=2; i<=n; i++){
        f=(f1+f2)%r;
        f1=f2;
        f2=f;
    }
    return f;
}

int main(){
    int n,t; cin >> t;
    while(t--){
        cin >> n;
        cout << fibo(n) << endl;
    }
}

// Dãy số Fibonacci được định nghĩa Fn = Fn-1 + Fn-2, n>1 và F0 = 0, F1 = 1. Dưới đây là một số số Fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21…
// Nhiệm vụ của bạn là tìm số Fibonacci thứ n.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương n.
// T, n thỏa mãn ràng buộc :1 ≤ T ≤ 100; 1≤n≤1000.
// Output:
// Đưa ra kết quả mỗi test theo modulo 109 + 7 theo từng dòng.
// Input
// 2
// 2
// 5
// Output
// 1
// 5