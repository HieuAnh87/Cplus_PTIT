#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

void run(){
    int n,x;  cin >> n >> x;
    int a[n+1];
    input(a,n);
    for(int i=0; i<n; i++){
        if(a[i]==x){
            cout << i+1 << endl;
            break;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--) run();
}
// Ý tưởng : ez

// Input:
// 2
// 10 3
// 5 6 7 8 9 10 1 2 3 4
// 10 3
// 1 2 3 4 5 6 7 8 9 10
// Output:
// 9
// 3