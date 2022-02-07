#include<iostream>
#include<vector>
using namespace std;
int n,m;
int a[105][105];
vector < int > res;

void input(){
    cin >> n >> m;
    res.clear();
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
        }
    }
}
void solve(){
    int l = 1 , r = m  , top = 1 , bot = n;
    while(l <= r && top <= bot){
        for(int i = l ; i <= r ; i++)  res.push_back(a[top][i]);
        top++;
        if ( top > bot ) break;
        for(int i = top; i <= bot ; i++) res.push_back(a[i][r]);
        r--;
        if(l > r) break;
        for(int i = r ; i >= l ; i--)    res.push_back(a[bot][i]);
        bot--;
        if ( top > bot ) break;
        for(int i = bot ; i >= top ; i--) res.push_back(a[i][l]);
        l++;
        if(l > r) break;
    }
    for(int i = res.size() - 1 ; i >= 0 ; i --){
        cout << res[i] << ' ';
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


// Cho ma trận A[N][M]. Nhiệm vụ của bạn là in các phần tử của ma trận theo hình xoắn ốc ngược. Ví dụ về in ma trận theo hình xoắn ốc ngược như dưới đây: 10  11  7  6  5  9  13  14  15 16  12  8  4  3  2  1.
// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M là cấp của ma trận A[][]; dòng tiếp theo đưa vào N×M số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N ≤100; 1≤ A[i][j] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 4 4
// 1 2 3 4

// 5 6 7 8

// 9 10 11 12

// 13 14 15 16
// 3 6
// 1 2 3 4 5 6

// 7 8 9 10 11 12

// 13 14 15 16 17 18
// Output:
// 10 11 7 6 5 9 13 14 15 16 12  8  4  3  2  1
// 11 10 9 8 7 13 14 15 16 17 18 12 6 5 4 3 2 1