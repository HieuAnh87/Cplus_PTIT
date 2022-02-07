#include <iostream>
#include<cmath>

using namespace std;
typedef unsigned long int lli;

lli gcd(lli a, lli b){
    if(a == 0 || b == 0){
        return a + b;
    }
    while(a*b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

lli lcm(lli a, lli b){
    return a*b / gcd(a,b);
}

int main(){
    int t; cin >> t;
    lli n;
    while(t--){
        cin >> n;
        lli Last = 1;       
        for(int i=1; i <= n; i++){
            Last = lcm(Last, i);
        }
        cout<< Last <<endl;
    }
}