#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define pb push_back
#define ll long long
using namespace std;
const int oo = 105;
int A[oo][oo];
/*
y tuong giong nhu bai in ma tran xoan oc nhung khac lata push vao vector sau do moi in ra v[k-1]
*/
int main(){
    faster();
    int test; cin >> test;
    while(test--){
        vector<int> v;
        int n, m, k; cin >> n >> m >> k;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin >> A[i][j];
        }
    int d = 0, l = n, s = m;
    int count = 0;
        while(d <= n/2 && d <= m/2){
            for(int i=d; i<s; i++)
                v.pb(A[d][i]);
            for(int i=d+1; i<l; i++)
                v.pb(A[i][s-1]);
            for(int i=s-2; i>=d; i--)
                v.pb(A[l-1][i]);
            for(int i=l-2; i>d; i--)
                v.pb(A[i][d]);
            d++; l--; s--;
        }
        cout << v[k-1] << endl;
    }
}

// Cho ma trận A[N][M]. Nhiệm vụ của bạn là đưa ra phần tử thứ k phép duyệt theo mô hình xoắn ốc trên ma trận của ma trận theo hình xoắn ốc. Ví dụ với k=6 của ma trận dưới đây sẽ cho ta kết quả là 12 ( Phép duyệt xoắn ốc: 1  2  3  4  8  12  16  15  14  13  9  5  6  7  11  10 ).

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M là cấp của ma trận A[][] và số k; dòng tiếp theo đưa vào N×M số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, M, N, k, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N, k ≤100; 1≤ A[i][j] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 4 4 6
// 1 2 3 4

// 5 6 7 8

// 9 10 11 12

// 13 14 15 16
// 3 4 10
// 1 2 3 4

// 5 6 7 8

// 9 10 11 12
// Output:
// 12
// 5