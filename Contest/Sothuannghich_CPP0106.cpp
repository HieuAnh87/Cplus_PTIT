#include<bits/stdc++.h>
using namespace std;

void run(){
    long long n; cin >> n;
    long long res=0,m=n;
    while(m>0){
        res = res*10 + m%10;
        m/=10;
    }
    if(res==n) cout << "YES" << endl;
    else       cout << "NO" << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}