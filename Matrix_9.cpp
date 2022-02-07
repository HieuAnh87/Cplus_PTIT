#include<iostream>
#include<queue>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
using namespace std;
const int oo = 2*1e3;
int A[oo][oo] = {0}, visit[oo][oo] = {0};
int n, m, x, y, z, t;
int BFS(){
    int ans = 0;
    if(!A[x+1][y+1]) return -1;
    queue<pair<int, int> > q;
    // pair<first, second> first la hang thu i - second: cot thu j
    q.push(pair<int, int>(x+1,y+1));
    while(!q.empty()){
        int len = 0, SIZE = q.size();
        // ta chi lap dung SIZE lan (vi ta can tim so buoc di ngan nhat)
        while(len < SIZE){
            pair<int, int> local = q.front(); q.pop();
            int i = local.first, j = local.second;
            if(i == z+1 && j == t+1) return ans;
            // neu A[i][j] = 1(co the di) thi ta push vao queue va danh dau visit[i][j] =1
            if(A[i+1][j] && !visit[i+1][j]){
                q.push(pair<int, int>(i+1, j));visit[i+1][j] = 1;
            }
            if(A[i][j+1] && !visit[i][j+1]){
                q.push(pair<int, int>(i, j+1));
                visit[i][j+1] = 1;
            }
            if(A[i-1][j] && !visit[i-1][j]){
                q.push(pair<int, int>(i-1, j));
                visit[i-1][j] = 1;
            }
            if(A[i][j-1] && !visit[i][j-1]){
                q.push(pair<int, int>(i, j-1));
                visit[i][j-1] = 1;
            }   
            len++;
        }
        ans++;
    }
    return -1;
    }
int main(){
    faster();
    int test; cin >> test;
    while(test--){
        cin >> n >> m >> x >> y >> z >> t;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> A[i][j]; 
                visit[i][j] = 0;
            }
        }
        cout << BFS() << endl;
    }
}


// Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. Hãy tìm đường đi ngắn nhất từ một phần tử bắt đầu đến phần tử đích. Biết mỗi bước đi ta chỉ được phép dịch chuyển từ phần tử có giá trị 1 đến phần tử có giá trị 1. Ví dụ với ma trận dưới đây sẽ cho ta kết quả là 11.
//   A[9][10]       ={{1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
//                   {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
//                   {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
//                   {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
//                   {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
//                   {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
//                   {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
//                   {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
//                   {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }};

// Begin = A[0][0];
// End =A[3][4];
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: Dòng đầu tiên đưa vào 6 số N, M, phần tử bắt đầu (x, y),  phần tử kết thúc (z, t) ; dòng tiếp là N×M các phần tử của ma trận A[][]; các phần tử được viết cách nhau một vài khoảng trống.
// T, N, M, x, y, z, t thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M ≤103; 1≤ x, y, z, t ≤103.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng. Nếu không tìm được đáp án, in ra -1.
// Input:
// 1
// 9 10 0 0 3 4

// 1 0 1 1 1 1 0 1 1 1
// 1 0 1 0 1 1 1 0 1 1
// 1 1 1 0 1 1 0 1 0 1
// 0 0 0 0 1 0 0 0 0 1
// 1 1 1 0 1 1 1 0 1 0
// 1 0 1 1 1 1 0 1 0 0
// 1 0 0 0 0 0 0 0 0 1
// 1 0 1 1 1 1 0 1 1 1
// 1 1 0 0 0 0 1 0 0 1
// Output:
// 11