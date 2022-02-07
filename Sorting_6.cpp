#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        int a[n+1];
        input(a,n);
        sort(a,a+n);
        for(int k=0; k<n; k++){
            cout << a[k] << " ";
        }
        cout << endl;
    }
}

// Input:

// 2
// 5
// 0 2 1 2 0
// 3
// 0 1 0
// Output:

// 0 0 1 2 2
// 0 0 1


 