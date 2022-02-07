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
        int n,k;  cin >> n >> k;
        int a[n+1];
        int dem=0;
        input(a,n);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] + a[j] == k){
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
}



// Input:

// 2
// 5 0 
// 1 5 4 1 2
// 3 2

// 1 1 1

// Output:
// 0
// 3
 