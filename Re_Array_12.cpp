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
    int n;  cin >> n;
    int a[n+1]; input(a,n);
    long long temp, res=1; // 1 temp để là tích của 2 số, res là kqua
    for(int i=0; i<n; i++){
        temp = 1;
        for(int j=i; j<n; j++){
            temp *= a[j];  // 
            res = max(temp, res); // so sánh với temp
        }
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--)  run();
}


// Cho mảng A[] gồm n phần tử gồm các số âm và dương. Hãy tìm giá trị lớn nhất tích các phần tử của tất cả các dãy con liên tục trong mảng A[]. Ví dụ với mảng A[] = {6, -3, - 10, 0, 2 } ta có kết quả là 180 tương ứng với tích các phần tử của dài dãy con {6, -3, -10}.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số lượng phần tử của mảng N; phần thứ hai đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤100; 1≤ A[i] ≤200.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 3
// 5
// 6 -3 -10 0 2
// 6
// 2 3 4 5 -1 0 
// 10
// 8 -2 -2 0 8 0 -6 -8 -6 -1
// Output:
// 180
// 120
// 288
