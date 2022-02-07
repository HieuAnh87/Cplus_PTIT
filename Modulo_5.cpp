// (a ^ b) % M = ((a % M) ^ b) % M.

#include<iostream>
#include<cmath>
using namespace std; 

int main(){ 
	int t;  cin>>t; 
	while(t--){ 
		string s; long long n,k=0; cin>> s >>n; 
		for(int i=0;i<s.size();i++){ 
			k = k*10 + (s[i]-'0'); // i=0 thi k=1;
            k %= n; 
		} 
	cout << k << endl; 
	} 
}
// i=0 thi k=1;
// i=1 thì k=12 % n = 2
//....