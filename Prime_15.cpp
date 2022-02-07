#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}

void testcase(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0 && snt(i)){
            cout << i <<" ";
            break;
        }
    }
}

void run(){
    int n;  cin >> n;
    for(int i=1; i<=n; i++){
        if(i==1) cout << 1 << " ";
        if(snt(i)) cout << i << " ";
        else{
            testcase(i);
        }
    }
    cout << endl;
}
int main(){
    short t;  cin >> t;
    while(t--)  run();
}


// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N.

// Ví dụ n=10, ta có được kết quả : 1 2 3 2 5 2 7 2 3 2.

// Input:

// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N.
// T, N thỏa mãn ràng buộc 1≤T≤100; 1≤N ≤109.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng
// Input:
// 5
// 10
// Output:
// 1 2 3 2 5
// 1 2 3 2 5 2 7 2 3 2