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
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}


// Input:
// 2 
// 5  16
// 9  7  2  16  4
// 7  98
// 1  22  57  47  34  18  66
// Output:

// 4
// -1