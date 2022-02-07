#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 105;
int A[oo][oo], B[oo][oo];
// dung 1 mang B de mang A ko thay doi
int main(){
    int test; cin >> test;
    while(test--){
    int n, m; cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> A[i][j];
            B[i][j] = A[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j] == 1){
                // cho cot j = 1
                for(int k=0; k<n; k++) B[k][j] = 1;
                    // cho hang i bang 1
                    for(int k=0; k<m; k++) B[i][k] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << B[i][j] << " ";
    cout << endl;
    }
    cout << endl;
}
}

// Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. Hãy sửa đổi các phần tử của ma trận A[][] theo nguyên tắc: nếu phần tử A[i][j] = 1 ta thay tất cả các phần tử của hàng i, cột j bởi 1. Ví dụ với ma trận dưới đây sẽ minh họa cho phép biến đổi:

// 1          0          0          1                      1          1          1          1

// 0          0          1          0                      1          1          1          1

// 0          0          0          0                      1          0          1          1

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M ; dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, M thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤100.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 2 3
// 0 0 0 

// 0 0 1

// 3 4
// 1 0 0 1 

// 0 0 1 0 

// 0 0 0 0
// Output
// 0 0 1

// 1 1 1

// 1 1 1 1

// 1 1 1 1

// 1 0 1 1