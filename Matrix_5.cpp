#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        int b[n], c[n];
        reset(b), reset(c);
        for (int i = 0; i < n;i++)
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                b[i] += a[i][j];
                c[j] += a[i][j];
            }
        int res = 0;
        int MAX = max(*max_element(b, b + n), *max_element(c, c + n));
        for (int i = 0; i < n;i++){
            res += MAX - c[i];
        }
        cout << res << endl;
    }
}

// Cho ma trận vuông A[N][N]. Tìm số phép biến đổi ít nhất để tổng theo các hàng, các cột của ma trận đều bằng nhau. Biết mỗi phép biến đổi bạn chỉ được phép tăng một phần tử bất kỳ của ma trận lên 1 đơn vị. Ví dụ với ma trận

            // 1       2       ->      4       3
            // 3       4       ->      3       4

 

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]; dòng tiếp theo đưa vào N×N số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ N ≤100; 1≤ A[i][j] ≤150.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 2
// 1 2 3 4
// 3
// 1 2 3 4 2 3 3 2 1
// Output:

// 4
// 6