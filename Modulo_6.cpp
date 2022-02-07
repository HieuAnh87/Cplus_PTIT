// (a ^ b) % M = ((a % M) ^ b) % M.
// Thuat toan chia de tri
#include<iostream>
#include<cmath>
using namespace std;

long long mod(string a, long long b){
    long long temp=0;
    for(int i=0; i<a.size(); i++){
        temp = temp*10 + (a[i]-'0');
        temp %= b;
    }
    return temp;
}

long long power(long long a, long long b, long long c){
    if(b==0) return 1;
    long long x=power(a, b/2, c);
    if(b%2==0) return (x%c*x%c)%c;
    return a*(x%c*x%c)%c;
}

int main(){
    short t;  cin >> t;
    while (t--){
        string a; long long b,m;  cin >> a >> b >> m;
        int tmp = mod(a,m);
        int result = power(tmp,b,m);
        cout << result << endl;
    }
}