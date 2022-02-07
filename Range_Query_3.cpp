// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}

void run(){
    int l,r; cin >> l >> r;
    int dem=0;
    for(int i=l; i<=r; i++){
        if(snt(i)) dem++;
    }
    cout << dem << endl;
}


int main()
{
    int t; cin >> t;
    while(t--) run();
    return 0;
}


// Cho một câu hỏi Q là bộ đôi hai số L và R. Nhiệm vụ của bạn là xác định xem có bao nhiêu số nguyên tố trong khoảng [L, R]. Ví dụ với Q = [1, 10] ta có câu trả lời là 4 vì có {2, 3, 5, 7} là các số nguyên tố. 

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một bộ đôi L, R. các số được viết cách nhau một vài khoảng trống.
// T, L, R thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ L≤ R  ≤105;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 1 10
// 5 10
// Output:

// 4
// 2

