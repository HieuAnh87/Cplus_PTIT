#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}

void run(){
    long long dem=0;
    long long a,b;   cin >> a >> b;
    for(int i=a; i<=sqrt(b); i++){
        if(snt(i)) dem++;
    }
    cout << dem << endl;
}

int main(){
    short t;  cin >> t;
    while (t--)  run();
}