#include<bits/stdc++.h>
using namespace std;

void run(){
    int n; cin >> n;
    int a[n+1];
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a,a+n);
    int min = abs(a[1] - a[2]);
    for(int i=0 ; i<n-1; i++){
        if(a[i+1]-a[i]<min) min = a[i+1]-a[i];
    }
    cout << min << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}

// Cho mảng A[] gồm n số chưa được sắp xếp. Hãy tìm Min(A[i]-A[j]) : i ≠j và i, j =0, 1, 2, .., n-1. Ví dụ với A[] = {1, 5, 3, 19, 18, 25} ta có kết quả là 1 = 19-18. với A[] = {1, 19, -4, 31, 28, 35, 100} ta có kết quả là 3 = 31-28.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103; -103≤ A[i]  ≤103.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5
// 2 4 5 7 9
// 10
// 87 32 99 75 56 43 21 10 68 49
// Output:
// 1
// 6