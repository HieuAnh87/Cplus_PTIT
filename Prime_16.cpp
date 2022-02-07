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
    long long n; cin >> n;
    long long dem=0;
    for(int i=0; i<=sqrt(n); i++){
        if(snt(i)) dem++;
    }
    cout << dem << endl;
}

int main(){
    short t;  cin >> t;
    while (t--)  run();
}


// Ý tưởng: số có đúng 3 ước số -> Snt^2 -> chỉ cần xét cái nào là snt 


// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số. Ví dụ n=100, ta có các số 4.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N.
// T, N thỏa mãn rang buộc 1≤T≤100; 1≤N ≤1012.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:


// 2

// 50

// 200
// Output:
// 4

// 6