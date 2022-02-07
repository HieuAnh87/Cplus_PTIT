#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
using namespace std;
int A[20][20];
// dem so cot toan 1 tu hang l->r
int maxRectangle(int l, int r, int m){
    int res = 0;
    for(int i=1; i<=m; i++){
    bool isFull_1 = false;
    for(int j=l; j<=r; j++){
        if(!A[j][i]){
            isFull_1 = true;
            break;
        }
    }
    if(!isFull_1) 
        res++;
    }
    return res;
}
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
            for(int j=i; j<=n; j++){
                // dien tich cua hcn
                ans = max(ans, maxRectangle(i, j, m) * (j-i+1));
            }
        }
        cout << ans << endl;
    }
}


// Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. Hãy tìm hình chữ nhật lớn nhất có các phần tử đều bằng 1 bằng cách tráo đổi các cột của ma trận với nhau. Ví dụ với ma trận dưới đây ta sẽ có hình chữ nhật lớn nhất có các phần tử là 1 bằng 6.

// 0  1  0  1  0       0  0  1  1  0

// 0  1  0  1  1       0  0  1  1  1

// 1  1  0  1  0       1  0  1  1  0

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M ; dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, M thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤15.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2

// 2 3

// 1 1 1

// 0 1 1

// 2 2

// 1 0

// 1 1
// Output:
// 4
// 2