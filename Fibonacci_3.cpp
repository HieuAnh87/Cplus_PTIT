#include<iostream>
#include<cmath>
#define Max 1000
using namespace std;

int fibo(int n){
    if(n==0||n==1) return n;
    int f1=0,f2=1,f;
    while(f1+f2<=n){
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
}

void run(int a[],int n){
    for(int i=0; i<n; i++){
        if(fibo(a[i])==a[i])
        cout << a[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int a[Max];
    short t ;  cin >> t;
    while(t--){
        int n;   cin >> n;
        for(int i=0; i<n; i++)
        cin >> a[i];
        run(a,n);
    }
}

// Cho mảng A[] gồm n số nguyên không âm. Hãy tìm dãy con lớn nhất chỉ toàn các số Fibonacci. Số 0 được coi là số Fibonacci đầu tiên. 
//  Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc :1 ≤ T ≤ 100; 1≤n≤100; 1≤A[i]≤1000.
// Output:
// Đưa ra dãy con lớn nhất bao gồm các số Fibonacci của mỗi test theo từng dòng.
// Input
// 2
// 7
// 1 4 3 9 10 13 7
// 9
// 0 2 8 5 2 1 4 13 23
// Output
// 1 3 13
// 0 2 8 5 2 1 13