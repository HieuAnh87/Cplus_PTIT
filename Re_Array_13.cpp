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
    int n, m;  cin >> n >> m;
    int a[n+1], b[m+1];
    input(a,n); input(b,m);
    sort(a,a+n);
    int flag = a[0] - 1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[j]==b[i]){
                cout << a[j] << " ";
                a[j] = flag;
            }
            if(a[j] > b[i]) break;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]!=flag)  cout << a[i] << " ";
    }
    cout << endl;    
}

int main(){
    int t;   cin >> t;
    while(t--)  run();
}




// Input:
// 1
// 11 4
// 2 1 2 5 7 1 9 3 6 8 8
// 2 1 8 3
// Output:

// 2 2 1 1 8 8 3 5 6 7 9