#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
/*
    mot mang dem so lan xuat hien.
    sap xep + tham lam.
*/
int n,k;
const int maxN = 1e5+5;
int a[maxN];
int cnt[maxN] = {0};
bool cmp(int x , int y){
    if( cnt[x] == cnt[y]) return ( x < y);
    else return ( cnt[x] > cnt[y]);
}
void input(){
    cin >> n ;
    for(int i = 0 ; i < n;  i++)
        cin >> a[i];
    memset(cnt,0,sizeof cnt);
}
void solve(){
    for(int i = 0 ; i < n ; i++) cnt[a[i]]++;
    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
    cout << endl;
    
}
int main(){
    int t=1; 
    cin>>t; 
    while(t--){ 
        input();
        solve();
    }
    return 0;
}

// Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤104; 1≤ k ≤103; 1≤ A[i] ≤105.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5
// 5 5 4 6 4
// 5
// 9 9 9 2 5
// Output:
// 4 4 5 5 6
// 9 9 9 2 5
 

