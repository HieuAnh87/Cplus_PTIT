#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

string so(int n){
    string s="";
    while(n>0){
        char tmp = (char)(n%10 +'0');
        n/=10;
        s=tmp+s;
    }
    return s;
}

int com(int a, int b){    // 997 với 88
    string A = so(a);    //997
    string B = so(b);   //88
    return A+B>B+A;    // 99788 > 88997
}

void run(){
    int n;  cin >> n;
    int a[n+1];  input(a,n);
    sort(a,a+n,com); // so sánh dựa trên com 
    for(int i=0; i<n; i++)
        cout << a[i];
    cout << endl;
}

int main(){
    int t;   cin >> t;
    while(t--)  run();
}

// Ý tưởng : so sánh từng cặp số với nhau tạo thành 1 string qua hàm sort.

// Input:
// 2
// 4
// 54  546  548  60
// 8
// 1  34  3  98  9  76  45  4
// Output:
// 6054854654
// 998764543431