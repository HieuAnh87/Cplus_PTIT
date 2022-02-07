#include<iostream>
#include<cmath>
using namespace std;

long long gcd(long long a, long long b){ 
    if(a==0||b==0) return a+b;
    while (a*b!=0){
        if(a>b) a%=b;
        else    b%=a;
    }
    return a+b;
}
long long lcm(long long a, long long b){
    return  a*b/gcd(a,b);
}

void run(){
    long long x,y,z,n;  cin >> x >> y >> z >>  n; 
    long long res = lcm(x,y); res=lcm(res,z); // lcm(4,5,6)=60
    long long m = pow(10,n-1); // m =1000;
    long long k=m/res;    // k=1;
    if(res*k == m)              cout << res*k << endl;  // 60 # 100
    else if(res*(k+1) < pow(10,n)-1) cout << res*(k+1) <<endl;  // 120 < 999
    else                        cout << -1 << endl;
}

int main(){
    int t;  cin >> t;
    while(t--)  run();
}

