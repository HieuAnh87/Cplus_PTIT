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
    while (t--){
        int n; cin >> n;
        int a[n+1];
        input(a,n); sort(a,a+n);
        int res=0;
        for(int i=0; i<n-1; i++){
            if(a[i] != a[i+1]){
                res+=(a[i+1]-a[i]-1);
            }
        }
            cout << res << endl;
    }
}



// Input:
// 2
// 5
// 4 5 3 8 6
// 3
// 2 1 3
// Output:

// 1
// 0
 
