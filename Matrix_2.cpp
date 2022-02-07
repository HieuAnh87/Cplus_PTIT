#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin>>t; 
    while(t--){ 
        int n; cin>>n; 
        int a[n][n]; 
        multiset<int>ms; 
        for(int i=0;i<n;i++){ 
            set<int>s; 
            for(int j=0;j<n;j++){ 
                cin>>a[i][j]; 
                s.insert(a[i][j]); 
            } 
            for(int x:s){ 
                ms.insert(x); 
            } 
        } 
        vector<int>u; 
        for(int x:ms) 
        u.push_back(x); 
        int res=0; 
        for(int i=0;i<u.size();i++){ 
            int cnt=1; 
            while(u[i]==u[i+1]){ 
                cnt++; i++; 
            } 
            if(cnt==n) 
            res++; 
        } 
        cout<<res<<endl; 
    } 
}

// Cho ma trận vuông A[][] cấp N. Nhiệm vụ của bạn là đưa ra số các phần tử giống nhau ở tất cả các hàng. Ví dụ với ma trận A[][] dưới đây sẽ cho ta kết quả là 2 tương ứng với số 2, 3 xuất hiện ở tất cả các hàng.

// 2          1          4          3

// 1          2          3          2

// 3          6          2          3

// 5          2          5          3

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là cấp của ma trận A[][]; dòng tiếp theo đưa vào N×N số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ N ≤100; 1≤ A[i][j] ≤105.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1
// 4
// 2 1 4 3 1 2 3 2 3 6 2 3 5 2 5 3
// Output:

// 2