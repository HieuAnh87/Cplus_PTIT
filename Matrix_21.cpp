#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
const int oo = 250;
#define ll long long
using namespace std;
ll A[oo][oo], dp[oo][oo] = {0}, n, m;

ll maxRectangle(){
    ll ans = 0;
    // xet tai hang thu i tu vi tri j->k
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            ll sum = 0;
            for(int k=j; k<=m; k++){
                sum += A[i][k];
                // ta co the viet dp[j][k] = max(dp[j][k] + sum, sum)
                dp[j][k] = (dp[j][k] >= 0)? dp[j][k] + sum : sum;
                ans = max(ans, dp[j][k]);
            }
        }
    }
    return ans;
}

int main(){
    faster();
    int test; cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> A[i][j];
            }
        }//reset dp[] = 0
        for(int i=0; i<oo; i++){
            for(int j=0; j<oo; j++) dp[i][j] = 0;
        }
        cout << maxRectangle() << endl;
    }
}


// Cho ma trận A[N][M]. Nhiệm vụ của bạn là tìm hình chữ nhật con của A[][] có tổng các phần tử lớn nhất. Ví dụ với ma trận dưới đây ta sẽ tìm ra được ma trận con có tổng các tử lớn nhất là 29.
// http://www.geeksforgeeks.org/wp-content/uploads/rectangle.png
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M; dòng tiếp theo đưa vào N×M số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N ≤200; -105≤ A[i][j] ≤105.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1
// 4 5
// 1 2 -1 -4 -20 -8 -3 4 2 1 3 8 10 1 3 -4 -1 1 7 -6
// Output:
// 29