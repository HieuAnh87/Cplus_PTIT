#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];
void xuat(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n;j++){
		a[i]=j;
		if(i==k) xuat();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a[0]=0;
		Try(1);
		cout<<endl;
	}
}

// Cho số tự nhiên N và số K. Hãy đưa ta các tổ hợp chập K của 1, 2, .., N.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi N, K được viết trên 1 dòng.
// T, N, K thỏa mãn ràng buộc :1 ≤ T, K, N ≤ 20.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input
// 1
// 5 3
// Output
// 123  124 125 134  135 145 234 235 245 345

