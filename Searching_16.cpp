#include<iostream>
#include<algorithm>
using namespace std;
/*
    sap xep + chat nhi phan
*/
const int maxN = 1e6+5;
int a[maxN],b[maxN],c[maxN];
int n,m,k;
void input(){
	cin >> n >> m >> k;
    for ( int i = 0 ; i < n ; i ++) cin >> a[i];
    for ( int i = 0 ; i < m ; i ++) cin >> b[i];
    for ( int i = 0 ; i < k ; i ++) cin >> c[i];
    
}
int B_search(int tmp[] , int size ,  int x){
    int l = 0 , r = size;
    int mid;
    while(l <= r){
        mid = ( l + r )/2;
        if ( tmp[mid] == x ) return 1;
        else if ( tmp[mid] > x ) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}
void solve(){
    sort(a,a+n);
    sort(b,b+m);
    sort(c,c+k);
    for ( int i = 0 ; i < n ; i ++){
        if ( B_search(b,m,a[i]) == 1){
            if ( B_search(c,k,a[i]) == 1){
                cout << a[i] <<  ' ';
            }
        }
    }
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

// IN
// 1
// 6 5 8
// 1 5 10 20 40 80
// 6 7 20 80 100
// 3 4 15 20 30 70 80 120
// Out
// 20 80