#include<iostream>
using namespace std;
int a;
void rutgon(){
    int b=0;
    while(a>0){
        b = a%10 + b;
        a/=10;
    }
        a=b;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> a;
        while(a>9){  // chỉ khi còn 1 chũ số thì sẽ dừng
            rutgon();
        }
        cout << a << endl;
    }
}
 