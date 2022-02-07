#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 105;
int A[oo][oo];
int main(){
    cin.tie(0); ios_base::sync_with_stdio(false);
    int test; 
	cin >> test;
    while(test--){
    int n, m; 
	cin >> n >> m;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++) cin >> A[i][j];
    }
    int d = 0, row = n, col = m;
    int count = 0; 
    while(d <= n/2 && d <= m/2){
        for(int i=d; i<col && count++ < n*m ; i++)
            cout << A[d][i] << " ";
        for(int i=d+1; i<row && count++ < n*m; i++)
	        cout << A[i][col-1] << " ";
        for(int i=col-2; i>=d && count++ < n*m; i--)
            cout << A[row-1][i] << " ";
        for(int i=row-2; i>d && count++ < n*m; i--)
            cout << A[i][d] << " ";
           d++;
		   row--; 
		   col--;
    }
    cout << endl;
}
}


// Cho ma trận A[N][M]. Nhiệm vụ của bạn là in các phần tử của ma trận theo hình xoắn ốc. Ví dụ về in ma trận theo hình xoắn ốc như dưới đây: 1  2  3  4  8  12  16  15  14  13  9  5  6  7  11  10 .

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M là cấp của ma trận A[][]; dòng tiếp theo đưa vào N×M số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N ≤100; 1≤ A[i][j] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 4 4
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// Output:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// 1 2 3 4 8 12 11 10 9 