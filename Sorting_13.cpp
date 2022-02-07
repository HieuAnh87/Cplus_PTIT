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
    while (t--){
        int n, m;
        cin >> n >> m;
        long long a[n+1], b[m+1], c[m+n+2];
        input(a,n);
        for(int i = 0; i < n; i++) {
            c[i] = a[i];
        }
        for(int j = 0; j < m; j++) {
            cin >> b[j];
            c[j+n] = b[j];
        }
        sort(c, c+m+n);
        for(int h = 0; h < m+n; h++) {
            cout << c[h] << " ";
        }
        cout << endl;
    }
}



// Input:


// 1

// 3 3

// 10 5 15

// 20 3 2

// Output:
// 2 3 5 10 15 20