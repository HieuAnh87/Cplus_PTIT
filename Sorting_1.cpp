#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int a[n+1];
        input(a,n);
        sort(a, a+n);
        for(int i = n-1; i > n/2; i--) {
            cout << a[i] << " " << a[n-1-i] << " ";
        }
        if(n%2==0){
            cout << a[n/2]<<" " << a[n/2-1];
        } else{
            cout << a[n/2];
        }
        cout << endl;
    }
}



// Input:
// 2
// 7
// 7 1 2 3 4 5 6
// 8
// 1 6 9 4 3 7 8 2

// Output:
// 7 1 6 2 5 3 4
// 9 1 8 2 7 3 6 4