#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n <2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}

void run(){
    short n; cin >> n;
    for(int i=2; i<=n/2; i++){
        if(snt(i) && snt(n-i)){
            cout << i << " " << n-i ;
            break;
        }
    }
    cout << endl;
}

int main(){
    short t; cin >> t;
    while(t--) run();
}

// ý tưởng:  Snt đầu + Snt cuối = Input
// cặp số nto 3+71=74

// Input:
// 2
// 74
// 1024
// Output:
// 3  71
// 3  1021