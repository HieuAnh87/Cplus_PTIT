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
    int a[n+1], b[n+1];
    input(a,n);
    //
    for(int i = 0; i < n; i++){
        b[i] = abs (x - a[i]);
    }
    //
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(b[j] > b[j+1]){
                 swap(a[j], a[j+1]);
                swap(b[j], b[j+1]);
            }
        }
    }
     //
    for(int k=0; k<n; k++){
        cout << a[k] << " ";
    }
    cout << endl;        
}


int main(){
    int t; cin >> t;
    while(t--)  run();
}


// Input:
// 2
// 5 7
// 10 5 3 9 2
// 5 6
// 1 2 3 4 5

//  Output:
// 5 9 10 3 2
// 5 4 3 2 1
 