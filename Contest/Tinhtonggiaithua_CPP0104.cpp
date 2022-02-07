#include<iostream>
using namespace std;
int main(){
    int n;  cin >> n;
    long S = 0, P = 1;
    for(int i = 1; i <= n; i ++){
        P = P * i;
        S = S + P;
    }
    cout << S;
}

// Viết chương trình tính tổng  S = 1 + 1.2 + 1.2.3 + ...+1.2.3...N
// Input
// Dữ liệu vào chỉ có 1 dòng ghi số N không quá 20. 
// Output
// Kết quả ghi trên một dòng. 
//
// Input
// 3
// Output
// 9