#include<iostream>
using namespace std;
int main(){
    short t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long num = (n-1)+1;
        long long res = (n+1)*num/2;
        cout << res << endl;
    }
}