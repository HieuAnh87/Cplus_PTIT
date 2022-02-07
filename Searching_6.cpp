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
    int n;  cin >> n;
    int a[n+1], res; 
    input(a,n);  
    int min =  abs(a[0] + a[1]);
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(abs(a[i] + a[j]) < min){
                min=abs(a[i] + a[j]);
                res=a[i] + a[j];
            }
        }
    }
    cout << res << endl;
}


int main(){
    int t; cin >> t;
    while(t--) run();
}



// Input:
// 2
// 3
// -8 -66 -60 
// 6
// -21 -67 -37 -18 4 -65
// Output:

// -68
// -14