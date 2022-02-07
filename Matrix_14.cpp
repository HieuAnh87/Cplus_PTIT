#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
const int MAX = 505;
using namespace std;
int A[MAX][MAX], dp[MAX][MAX] = {0};
/*
su dung quy hoach dong
dp[i][j] la hinh vuong 1-1 lon nhat xet den vi tri hang i cot j
o hang i cot j la o goc phai ben duoi cua hinh vuong
*/
int main(){
    faster();
    int test; cin >> test;
    while(test--){
        int n, m; cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> A[i][j];
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(A[i][j]){
                    dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
                    dp[i][j] += 1;
                }
                else dp[i][j] = 0;
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;
    }
}


// Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. Hãy tìm cấp ma trận vuông con lớn nhất có các phần tử đều bằng 1. Ví dụ với ma trận dưới đây ta sẽ có cấp ma trận vuông con lớn nhất có các phần tử là 1 bằng 3.

// maximum-size-square-sub-matrix-with-all-1s
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M ; dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, M thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤500.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5 6
// 0 1 0 1 0 1
// 1 0 1 0 1 0
// 0 1 1 1 1 0
// 0 0 1 1 1 0
// 1 1 1 1 1 1
// 2 2
// 1 1
// 1 1
// Output:
// 3
// 2

 