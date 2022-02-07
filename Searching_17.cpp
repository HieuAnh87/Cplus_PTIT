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
    int n, k;  cin >> n >> k;
    int a[n+1]; 
    input(a,n);  sort(a,a+n);
    cout << a[k-1] << endl;
}


int main(){
    int t; cin >> t;
    while(t--) run();
}



// Input:

// 1
// 6 3
// 10 5 15 50 40 80

// Output:
// 15