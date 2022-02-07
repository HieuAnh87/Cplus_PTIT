#include<bits/stdc++.h>
using namespace std;
int n,a[1005],dp1[1005],dp2[1005];
int slove(){
	for(int i=2;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>a[j] && dp1[i] <dp1[j]+1) dp1[i] =dp1[j]+1;
			}
		}
		for(int i=n-1;i>=1;i--){
			for(int j=n;j>i;j--){
				if(a[i]>a[j] && dp2[i] <dp2[j]+1) dp2[i] =dp2[j]+1;
			}
		}
		int Max=dp1[1]+dp2[1]-1;
		for(int i=2;i<=n;i++){
			if(dp1[i]+dp2[i]-1>Max) Max=dp1[i]+dp2[i]-1;
		}
		return Max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			dp1[i]=1;
			dp2[i]=1;
		}
		cout<<slove()<<endl;
	}
}


// Cho mảng A[] gồm N phần tử đã được sắp xếp. Hãy tìm K phần tử gần nhất của X khác X. Ví dụ với mảng A[] = {1, 3, 5, 7, 9, 11}, X = 7, K=2 thì ta có 2 phần tử gần nhất của 7 là 5 và 9. K là số chẵn và cần lấy một nửa lớn, một nửa nhỏ hơn X.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm ba dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo là N số A[i] là các phần tử của mảng A[]; dòng tiếp theo đưa vào hai số K và X.
// T, N, K, X, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, K, X ≤106, 1≤ A[i] ≤106 ;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5
// 1 2 5 3 2
// 8
// 1 11 2 10 4 5 2 1
//  Output:
// 5
// 6