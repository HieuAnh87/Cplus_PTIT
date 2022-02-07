#include<iostream>
#include<cmath>
using namespace std;

void run(){
    int a; long long b; cin >> a >> b;
    int mod=0;
    for(int i=1; i<=a; i++){
        mod += i % b;
    }    
    cout << mod << endl;
}

int main(){
    short t;  cin >> t;
    while(t--) run();
}