#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long ll;

ll fibo(ll n){
    if(n==1||n==0) return n;
    ll f1=0,f2=1,f;
    for(int i=2; i<=n; i++){
        f=f1+f2;
        f1=f2;
        f2=f;
     }
    return f;
}

int main(){
    ll n,t; cin >> t;
    while(t--){
        cin >> n;
        cout << fibo(n) << endl;
    }
}
// Fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21…
// INPUT:                                       OUTPUT
// 2                                            1

// 2                                            5

// 5