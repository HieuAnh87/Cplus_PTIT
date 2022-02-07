#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
const int oo = 505;
int A[oo][oo], H[oo] = {0};

int main(){
    cin.tie(0); ios_base::sync_with_stdio(false);
    int test; cin >> test;
    while(test--){
        int n, m; cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> A[i][j];
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) H[j] = (A[i][j])? H[j] + 1 : 0;
            int L[oo], R[oo];stack<int> stc1, stc2;
            stc1.push(0);
            for(int j=1; j<=m; j++){
                while(stc1.size() > 1 && H[stc1.top()] >= H[j]) stc1.pop();
                L[j] = stc1.top() + 1;
                stc1.push(j);
            }
            stc2.push(m+1);
            for(int j=m; j>=1; j--){
                while(stc2.size() > 1 && H[stc2.top()] >= H[j]) stc2.pop();
                R[j] = stc2.top() - 1;
                stc2.push(j);
            }
            for(int j=1; j<=m; j++) ans = max(ans, (R[j] - L[j] + 1) * H[j]);
        }
        cout << ans << endl;
    }
}

// Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. Hãy tìm hình chữ nhật lớn nhất có các phần tử đều bằng 1. Ví dụ với ma trận dưới đây ta sẽ có hình chữ nhật lớn nhất có các phần tử là 1 bằng 8.
// 0          1          1          0                     
// 1          1          1          1                      1          1          1          1
// 1          1          1          1                      1          1          1          1
// 1          1          0          0
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M ; dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, M thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤500.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1
// 4 4 
// 0 1 1 0
// 1 1 1 1
// 1 1 1 1
// 1 1 0 0
// Output:
// 8

 