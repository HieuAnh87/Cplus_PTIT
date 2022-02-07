#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

void run(){
    int n,x;  cin >> n >> x;
    int a[n+1];
    input(a,n);
    for(int i=0; i<n; i++){
        if(a[i]==x){
            cout <<1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}

// Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy đưa ra 1 nếu X có mặt trong mảng A[], ngược lại đưa ra -1.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n, X là số các phần tử của mảng A[] và số X cần tìm; dòng tiếp theo đưa vào n số A[i] (1≤i≤n) các số được viết cách nhau một vài khoảng trống.
// T, n, A, X thỏa mãn ràng buộc: 1≤T≤100; 1≤N, X, A[i] ≤106.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2 
// 5  16
// 9  7  2  16  4
// 7  98
// 1  22  57  47  34  18  66
// Output:
// 1
// -1