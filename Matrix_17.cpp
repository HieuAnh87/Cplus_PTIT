#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;
const int oo = 100;
/*
y tuong: su dung thuat toan quay lui(backTracking)
de duyet tat ca cac cach di chuyen den A[n-1][n-1]
*/
ll A[oo][oo], s, n, k, ans;
void backTrack(int i, int j){
s += A[i][j];
if(i == n-1 && j == n-1){
if(s == k) ans++;
}// neu s van con < k thi ta con duyet
else if(s <= k){
if(i < n-1) backTrack(i+1, j);
if(j < n-1) backTrack(i, j+1);
}//tra lai s luc chua cong A[i][j] cho thang dang sau no dung
s -= A[i][j];
}int main(){
faster();
int test; cin >> test;
while(test--){
cin >> n >> k;
s = 0; ans = 0;
for(int i=0; i<n; i++){
for(int j=0; j<n; j++) cin >> A[i][j];
}backTrack(0,0);
cout << ans << endl;
}
}

// Cho ma trận vuông A[N][N] gồm các số nguyên dương và số tự nhiên K. 
// Hãy tìm số các cách di chuyển từ phần tử đầu tiên (A[0][0] đến phần tử cuối cùng A[N-1][N-1] sao cho tổng các phần tử của phép di chuyển đúng bằng K. Biết từ phần tử A[i][j], ta chỉ được phép dịch chuyển đến phần tử A[i+1][j] hoặc A[i][j+1]. Ví dụ với ma trận dưới đây sẽ có 2 phép di chuyển theo nguyên tắc kể trên để có tổng bằng 12.
// 1          2          3         
// 4          6          5          Cách 1: 1 ®2 ®6 ®2 ®1    
// 3          2          1          Cách 2: 1 ®2 ®3 ®5 ®1
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào hai số N, K ; dòng tiếp là N×N các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤20; 1≤ A[i][j] ≤200.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 3 16
// 1 2 3
// 4 6 5
// 9 8 7
// 3 12
// 1 2 3
// 4 6 5
// 3 2 1
// Output:
// 0
// 2