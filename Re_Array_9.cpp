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
    int a[n+1];
    input(a,n);
    cout << a[0]*a[1] << " ";
    for(int i=1; i<n-1; i++){
        cout << a[i-1]*a[i+1] << " ";
    }
    cout << a[n-2]*a[n-1] << endl;
}

int main(){
    int t; cin >> t;
    while(t--)  run();
}



// Input:

// 2

// 5

// 2  3  4  5  6

// 6
// 9  7  12  8  6  5
// Output:
// 6  8  15  24 30

// 63 108  56  72  40  30