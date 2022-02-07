#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int check[1000];

void input(long long a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void temp(){
    for(int i = 0; i <= 1000; i++) {
        check[i] = 0;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        temp();
        int n;  cin >> n;
        long long a[n+1];
        input(a,n);
        for(int i=0; i<n; i++){
            while(a[i] > 0){
                check[a[i]%10] = 1;
                a[i] /=  10;
            }
        }
        for(int i=0; i<1000; i++){
            if(check[i]==1)
                cout << i << " ";
        }
        cout << endl;
    }
}



// Input:

// 2
// 3
// 131 11 48
// 4
// 111 222 333 446
// Output:

// 1 3 4 8
// 1 2 3 4 6
 