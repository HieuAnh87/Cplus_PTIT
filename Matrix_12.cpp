#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
/*
    https://www.geeksforgeeks.org/program-for-rank-of-matrix/
*/
int R,C;
int mat[17][17];
void input(){
    cin >> R >> C;
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> mat[i][j];
        }
    }
}
void swap(int row1, int row2, int col) { 
    for (int i = 0; i < col; i++) { 
        int temp = mat[row1][i]; 
        mat[row1][i] = mat[row2][i]; 
        mat[row2][i] = temp; 
    } 
} 
int rankOfMatrix() 
{ 
    int rank = C; 
    for (int row = 0; row < rank; row++) { 
        if (mat[row][row]) { 
            for (int col = 0; col < R; col++){ 
                if (col != row) { 
                    double mult = (double)mat[col][row]/mat[row][row]; 
                    for (int i = 0; i < rank; i++) 
                        mat[col][i] -= mult * mat[row][i]; 
                } 
            } 
        } 
        else{ 
            bool reduce = true; 
            for (int i = row + 1; i < R;  i++) { 
                if (mat[i][row]) { 
                    swap( row, i, rank); 
                    reduce = false; 
                    break ; 
                } 
            } 
            if (reduce) { 
                rank--; 
                for (int i = 0; i < R; i ++) 
                    mat[i][row] = mat[i][rank]; 
            } 
            row--; 
        } 
    } 
    return rank; 
} 
void solve(){
    cout << rankOfMatrix() << endl;
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

// Cho ma trận A[N][M]. Hãy tìm hạng của ma trận A[N][M]. Hạng của ma trận (Rank Matrix) là số các cột hoặc các hàng độc lập tuyến tính. . Ví dụ hạng của ma trận dưới đây là 2 vì có hàng 1 và hàng 2 là phụ thuộc tuyến tính.

// 10        20        10       

// 20        40        20       

// 30        50        0         

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, M ; dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, M, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤15; -102≤ A[i][j] ≤102.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2

// 3 3

// 10 20 10 20 40 20 30 50 0

// 3 3

// 10 20 10 -20 -30 10 30 50 0
// Output:

// 2

// 2