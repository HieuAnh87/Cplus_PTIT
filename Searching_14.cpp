#include<iostream>
#include<algorithm>
#include<cstring>
#define Max 100000
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

void run(){
    int n;  cin >> n;
    int a[n+1], check[Max];
    input(a,n);
    memset(check,0,sizeof(check));
    // memset() : sao chép một ký tự đơn lẻ trong một khoảng nhất định vào một đối tượng.
    // void* memset( void* dest, int ch, size_t count );
    // dest: Con trỏ tới đối tượng để sao chép ký tự.
    // ch: Ký tự cần sao chép.
    // count: Số lần sao chép. 
    int flag=0;
    for(int i=0; i<n; i++){  
        check[a[i]]++;
        if(check[a[i]] > 1 && flag==0){
            cout << a[i];
            flag=1;
        }
    }
    if(flag==0)     cout << -1;
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--) run();
}

// Ý tưởng : Tạo một mảng check , số nào xuất hiện thì đánh dấu, nếu > 1 lần thì in ra.

// Input:
// 2
// 5
// 4 5 1 2 1
// 6
// 10 20 30 30 20 5 7

// Output:
// 1
// 30