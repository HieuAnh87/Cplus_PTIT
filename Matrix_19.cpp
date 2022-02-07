#include<bits/stdc++.h>
using namespace std;
/*
    cac o co cung duong cheo se co i+j = nhau.
*/
int n,m;
int a[105][105];
int sum[105][105] = {0};
void input(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
            sum[i][j] = i+j;
        }
    }
}
void solve(){
    for(int i = 2 ; i <= n + m ; i ++){
        if ( i % 2 == 1){
            for(int j = 1 ; j <= m ; j++){
                for(int k = 1  ; k <= n ; k++){
                    if ( sum[j][k] == i ){
                        cout << a[j][k] << ' ';
                        break;
                    }
                }
            }
        }
        else {
            for(int j = m ; j >= 1 ; j--){
                for(int k = 1  ; k <= n ; k++){
                    if ( sum[j][k] == i ){
                        cout << a[j][k] << ' ';
                        break;
                    }
                }
            }
        }
    }
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


// Cho ma trận A[N][M]. Nhiệm vụ của bạn là in các phần tử của ma trận theo đường chéo. Ví dụ về in ma trận theo đường chéo: 1 2 5 9 6 3 4 7 10 13 14 11 8 12 15 16.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M là cấp của ma trận A[][]; dòng tiếp theo đưa vào N×M số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N ≤100; 1≤ A[i][j] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 3 3
// 1 2 3

// 4 5 6

// 7 8 9
// 2 2
// 1 2

// 3 4
// Output:

// 1 2 4 7 5 3 6 8 9
// 1 2 3 4

