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
    int a[n+1]; input(a,n); sort(a,a+n);
    int k=n-n/2;
    int m=k;
    for(int i=0; i<m; i++){ // chạy đến n-n/2
        cout << a[i] << " ";
        if(k!=n) cout << a[k] << " ";
        k++;
    }
    cout << endl;

}

int main(){
    int t;   cin >> t;
    while(t--)  run();
}
//Ý tưởng đề bài lủng củng, in so le lớn đến bé chia nửa mảng ra
// VD: 1 3 2 7 9 8 => 1 7 2 8 3 9
// còn nếu là 1 2 3 4 5 6 7
// thì thành 1 5 2 6 3 7 4

// Input
// 2
// 4
// 1  2  2 1
// 3
// 1  3  2
// Output:
// 1  2  1  2
// 1  3  2