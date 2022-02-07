#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)  return false;
    return true;
}

void run(){
    short m, n; cin >> m >> n;
    if(m>n)  swap(m,n);
    for(int i=m; i<=n; i++){
        if(snt(i)) cout << i << " ";
    }
    cout << endl;
}

int main(){
    short t; cin >> t;
    while(t--) run();
}


// Input:
// 2
// 1  10
// 3  5
// Output:
// 2  3  5  7
// 3  5