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
    int n, x;  cin >> n >> x;
    int a[n+1], res=0; 
    input(a,n);
    for(int i=0; i<n; i++){
        if(a[i]==x) res++;
    }
    if(res==0) cout << -1 << endl;
    else cout << res << endl;
}    
int main(){
    int t; cin >> t;
    while(t--) run();
}

// Ý tưởng : Tìm số lần xuất hiện số X trong mảng
//           res++;


// Input:
// 2
// 7 2
// 1 1 2 2 2 2 3
// 7 4
// 1 1 2 2 2 2 3
// Output:
// 4
// -1