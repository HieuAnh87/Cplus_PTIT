#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 1; i < n-1; ++i){
        cin >> a[i];
    }
}

void run(){
    int n,x;  cin >> n >> x;
    int a[n+1];
    input(a,n);
    for(int i=1; i<n; i++){
        if(a[i+1] - a[i] != 1){
            cout << a[i]+1 << endl;
            break;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--) run();
}
// Ý tưởng : số sau - số trước = 1 thì đúng.

// Input:
// 2
// 5
// 1 2 3 5
// 10
// 1 2 3 4 5 6 7 8 10
// Output:
// 4
// 9