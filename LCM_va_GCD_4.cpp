#include<iostream>
#include<cmath>
using namespace std;

long long gcd(long long a, long long b){
    if(a==0||b==0) return a+b;
    while(a*b != 0){
        if(a>b)  a%=b;
        else     b%=a;
    }
    return a+b;
}

long long reduce(long long a, string b){
	long long mod=0;
	for(int i=0; i<b.size(); i++){
		mod = (mod*10 + b[i] - '0') % a;
	}
	return mod;
}

long long gcdLarge(long long a, string s){
	long long num=reduce(a,s);
	return gcd(a,num);
}

void run(){
    long long n;  cin >> n; 
    string s; cin >> s;
    cout << gcdLarge(n,s);
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--)  run();
}