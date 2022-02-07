#include<iostream>
#include<algorithm>
#include<cmath>
#define Max 1000000
using namespace std;

void run(){
    int n, k;  cin >> n >> k;
    int a[Max], mark[Max]={};
    //nhap mang
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        mark[a[i]]=1;  // đánh dấu các số đã có trong mảng
    }
    for(int i=0; i<n; i++){
        if(a[i] > k){
            int res = a[i] - k;    // Tìm kqua A[i] -  X = A[j] sau đó check với input
            if(mark[res]==1){      // here heheh
                cout << "1" << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}

// Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X.  Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

// Ý tưởng : Thay vì tìm A[i] - A[j] = X, ta sẽ lấy A[i] - X rồi so sánh kqua với input đã cho.


// Input:

// 2
// 6 78
// 5 20 3 2 5 80
// 5 45
// 90 70 20 80 50

// Output:
// 1
// -1

