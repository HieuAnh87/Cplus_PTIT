#include<iostream>
#include<cmath>
using namespace std;

long long test(long long a, long long b){
    int mod=0;
    for(int i=0; i<=a; i++){
        mod += i % b;
    }
    return mod;
}

int main(){
    short t;  cin >> t;
    while(t--){
        long long a,b;  cin >> a >> b;
        if(test(a,b)==b) cout << 1 << endl;
        else             cout << 0 << endl;
    }
}