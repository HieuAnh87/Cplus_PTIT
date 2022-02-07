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
    int a[n+1];  input(a,n);
    for(int i=0; i<n; i++){
        if(a[i]==a[i+1]){
            a[i] *= 2;
            a[i+1]=0;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]) cout << a[i] << " ";
    }
    for(int i=0; i<n; i++){
        if(!a[i]) cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;   cin >> t;
    while(t--)  run();
}


// Input:

// 2

// 6

// 2  2  0  4  0  8

// 10
// 0  2  2  2  0  6  6  0  0  8
// Output:

// 4  4  8  0  0  0

// 4  2  12  8  0  0  0  0  0  0 