#include<iostream>
#include<algorithm>
using namespace std;
/*
    thay vi nhap vao va tran , nhap vao mang 1 chieu r sap xep.
*/
const int maxN = 1e5+5;
int n,k,a[maxN];
void input(){
    cin >> n >> k;
    for(int i = 0; i < n*n ; i++)
        cin >> a[i];
}
void solve(){
    sort(a,a+n*n);
    cout << a[k-1] << endl;
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


// Cho ma trận vuông A[][] cấp n. Các phần tử của ma trận A[][] đã được sắp xếp theo hàng, cột. Hãy tìm phần nhỏ nhất thứ k của ma trận. Ví dụ với ma trận cấp 4 dưới đây sẽ cho ta số nhỏ nhất thứ 3 là 20, số nhỏ nhất thứ 7 là 30.
// 10  20  30  40

// 15  25  35  45

// 24  29  37  48

// 32  33  39  50
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là n và k; phần thứ hai là n2 các phần tử của ma trận vuông A[][]; các số được viết cách nhau một vài khoảng trống.
// T, n, k, A[i][i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤100; 1≤ k, A[i][j] ≤104;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1

// 4  7

// 10  20  30  40

// 15  25  35  45

// 24  29  37  48

// 32  33  39  50
// Output:

// 30

 