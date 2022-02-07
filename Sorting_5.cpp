
#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int d[100005]={0};
		for(int i=0;i<n+m;i++){
			cin>>a[i];
			d[a[i]]++;
		}
		for(int i=0;i<=100000;i++){
			if(d[i]>0) cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0;i<=100000;i++){
			if(d[i]>1) cout<<i<<" ";
		}
		cout<<endl;
	}
}

// IN
// 1
// 6 5
// 7 1 5 2 3 6
// 3 8 6 20 7
// Out
// 1 2 3 5 6 7 8 20
// 3 6