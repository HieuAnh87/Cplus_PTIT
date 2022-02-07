#include<bits/stdc++.h>
using namespace std;

void run(){
    int n,k; cin >> n >> k;
    int a[10000];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    cout << a[k-1] << endl;
}

int main(){
    int t; cin >> t;
    while(t--)  run();
}

// Cho mảng A[] gồm n số và số k. Hãy tìm phần tử nhỏ nhất thứ k của mảng. Ví dụ với mảng A[] = {7, 10, 4, 3, 20, 15 }, k=3 ta nhận được số nhỏ nhất thứ k là 7.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[] và số k; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ k≤n ≤105; 1≤ A[i] ≤105;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2

// 6  3

// 7  10  4  3  20  15

// 6  4
// 9  7  12  8  6  5
// Output:
// 7
// 8