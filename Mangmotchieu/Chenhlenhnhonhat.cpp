#include<bits/stdc++.h>
using namespace std;

void run(){
    int n; cin >> n;
    int a[n+1];
    for(int i=0; i<n; i++)  cin >> a[i];
    sort(a,a+n);
    int sub,min=a[1]-a[0];
    for(int i=0; i<n-1; i++){
        sub = a[i+1] - a[i];
        if(sub < min) min = sub;
    }
    cout << min << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}

// Cho dãy số A[] gồm có N phần tử. Bạn cần tìm chênh lệch nhỏ nhất giữa hai phần tử bất kì trong dãy số đã cho.
// Input:
// Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
// Mỗi test gồm số nguyên N (1≤ N ≤ 100 000).
// Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 109).
// Output: 
// Với mỗi test, in ra trên một dòng là đáp án tìm được.
// Ví dụ:
// Input:
// 3
// 6
// 1 5 3 19 18 25
// 4
// 30 5 20 9
// 7
// 1 19 2 31 38 25 100
// Output
// 1
// 4
// 1