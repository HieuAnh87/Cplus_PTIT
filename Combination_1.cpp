#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) xuat();
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
}

// Cho số tự nhiên N. Hãy đưa ta các xâu nhị phân có độ dài N.
// Input:
// x Dòng đầu tiên đưa vào số lượng bộ test T.
// x Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N được viết trên 1 dòng. 
// x T, N thỏa mãn ràng buộc :1 ≤ T, N ≤ 20.
// Output:
// x Đưa ra kết quả mỗi test theo từng dòng.
// Input
// 2
// 2
// 3
// Output
// 00 01 10 11
// 000 001 010 011 100 101 110 111