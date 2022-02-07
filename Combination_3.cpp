#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
bool chuaxet[1005];
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			chuaxet[j]=false;
			a[i]=j;
			if(i==n)xuat();
			else Try(i+1);
			chuaxet[j]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		memset(chuaxet,true,sizeof(chuaxet));
		Try(1);
		cout<<endl;
	}
}


// Cho số tự nhiên N. Hãy đưa ta các hoán vị của 1, 2, .., N.
//  Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N được viết trên 1 dòng.
// T, N thỏa mãn ràng buộc :1 ≤ T, N ≤ 20.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input
// 1
// 3
// Output
// 123  132 213 231 312 32