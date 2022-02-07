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
    int a[n+1];  input(a,n); sort(a,a+n);
    if(n%2==0){
        for(int i=0; i<n/2; i++){
            cout << a[n-i-1] << " " << a[i] <<" ";
        }
    }
    else{
        for(int i=0; i<n/2; i++){
            cout << a[n-i-1] << " " << a[i] <<" ";
        }
        cout << a[n/2];
    }
    cout << endl;
}

int main(){
    int t;   cin >> t;
    while(t--)  run();
}




// Input:

// 2

// 4

// 1  5  2  7

// 6
// 1  3  2  7  9  8
// Output:

// 7  1  5  2

// 9  1  8  2  7  3 

