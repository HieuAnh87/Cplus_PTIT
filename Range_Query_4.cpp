#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e6+5;
int a[maxN];

void input(int n){
    for(int i = 0 ; i < n ; i++) 
        cin >> a[i];
}
void solve(int n){
    long long s = 0,res = 0;
    int x = *max_element(a,a+n); // max cua mang a
    if ( x < 0){
        // neu day a toan so am , thi in ra so lon nhat
        cout << x << endl;
    }
    else{
        for(int i = 0 ; i < n ; i++){  // tim day con lien tiep co tong lon nhat.
            s += a[i];
            if ( s < 0 ) s = 0;
            else res = max(res,s);
        }
        cout << res << endl;
    }
}
int main(){
    int t; cin>>t; 
    while(t--){ 
        int n; cin >> n;        
        input(n);
        solve(n);
    }
    return 0;
}

// Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là tìm tổng lớn nhất các dãy con liên tục của mảng A[]. Ví dụ với A[] = { -2, -3, 4, -1, -2, 1, 5, -3} ta có câu trả lời là 7 tương ứng với tổng lớn nhất của dãy con liên tục {4, -1, -2, 1, 5}. 
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n  ≤106; 10-6≤ A[i]  ≤106.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5
// 1 2 3 -2 5
// 4
// -1 -2 -3 -4
// Output:
// 9
// -1