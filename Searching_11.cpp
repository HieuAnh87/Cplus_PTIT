#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
/*
	di thi nhap xuat roi in ra ket qua la duoc r.
*/
const int  N = 1e7 + 5 ;
int a[N];
int n,x,res = -1;
void input(){
    cin >> n >> x;
    res = -1;
    for(int i = 0  ; i < n ;i ++){
        cin >> a[i];
        if(a[i] == x)
            res = i;
    }
}
void solve(){
    cout << res << endl;
}
int main(){
	int t = 1;
	cin >> t; 
	while(t--){
        input() ; 
        solve();
    }
	return 0;
}


// Input:
// 2
// 10 4
// 1 2 3 5 10 9 8 7 6 4 
// 10 4
// 1 2 3 5 10 9 8 7 6 -1
// Output
// 9
// -1