#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

bool check(int a[],int n){ // check trùng 
    for(int i=0; i<n-1; i++){
        if(a[i+1]!=a[i]) return true;
    }
    return false;
}

void run(){
    int n;  cin >> n;
    int a[n+1]; 
    input(a,n);  sort(a,a+n);
    if(check(a,n)==false) cout << -1 << endl;  //check trùng=> -1
    else{
        for(int i=1; i<n; i++){
            if(a[i]>a[0]){
            cout << a[0] << " " << a[i] << endl;
            break;
            }
        }
    }    
}


int main(){
    int t; cin >> t;
    while(t--) run();
}

//Ý tưởng  : Check xem có số nào trùng không. nếu trùng thì số thứ 2= -1. 
//           Dùng sort để xếp. chỉ cần lớn hơn số đầu tiên là break.

//Input:
// 2
// 10
// 5 6 7 8 9 10 1 2 3 4
// 5
// 1 1 1 1 1
// Output:
// 1  2
// -1