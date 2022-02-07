#include<iostream>
#include<cmath>
using namespace std;

void run(){
    string s; 
    int n;  
    cin >> s >> n;
    bool mark[500]={}; // bool để xét 0 và 1
    int dem=0;
    for(int i=0; i<s.size(); i++) mark[s[i]]=1; // đánh dấu tất cả các chữ đã có
    for(int i='a'; i<='z'; i++){
        if(mark[i]==0) dem++; // chữ nào chưa có ->>> đếm 
    }
    if(dem<=n)  cout << "1" << endl;  // nếu nhiều hơn số lần sửa
    else        cout << "0" << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
    return 0;
}

// Input:
// 2
// qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
// 4
// qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
// 24
// Output:
// 0
// 1