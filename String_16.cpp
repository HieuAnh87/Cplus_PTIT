#include<bits/stdc++.h>
using namespace std;
int n,r,b,g;
long long slove(){
	long long a[n+5];
	a[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]*i;
	}
	int left=n-(r+b+g);
	long long sum=0;
	for(int i=0;i<=left;i++){
		for(int j=0;j<=left-i;j++){
			int k=left-(i+j);
			sum+=(a[n]/(a[i+r]*a[j+b]*a[k+g]));
		}
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>r>>b>>g;
		cout<<slove()<<endl;
	}
}

// In
// 2
// 4 1 1 1
// 4 2 0 1
// Out
// 36
// 22