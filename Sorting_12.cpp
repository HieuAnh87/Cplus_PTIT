#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(long long a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,m;  cin >> n >> m;
        long long a[n+1], b[m+1];
        input(a,n);  input(b,m);
        sort(a,a+n);
        sort(b,b+m);
        cout << a[n-1]*b[0] << endl;
    }
}


// Input:
// 2
// 6 6
// 5 7 9 3 6 2
// 1 2 6 -1 0 9
// 6 6

// 1 4 2 3 10 2
// 4 2 6 5 2 9

// Output:
// -9
// 20
 

