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
    short n; cin >> n;
    for(int i=1; i<=n; i++){
        if(i==1) cout << i << " ";
        if(snt(i)) cout << i << " ";
        else {
            testcase(i);
            }
        }
    cout << endl;
}

int main(){
    short t; cin >> t;
    while(t--) run();
}

// Input:
// 2
// 6
// 10
// Output:
// 1 2 3 2 5 2
// 1 2 3 2 5 2 7 2 3 2