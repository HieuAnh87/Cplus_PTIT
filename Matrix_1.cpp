#include<bits/stdc++.h>
using namespace std;
long long a[105][105];

void quay(int n,int m){
	int cot=0, dong=0;
	long long tmp;
	int cot1 = n, dong1 = m;
	while(dong<n && cot<m){
		if(dong+1 == n || cot+1 == m) break;
		tmp=a[dong+1][cot];
		for(int i=cot;i<m;i++)
			swap(a[dong][i],tmp);
		dong++;
		for(int i=dong;i<n;i++)
			swap(tmp,a[i][m-1]);
		m--;
		if(dong<n){
			for(int i=m-1;i>=cot;i--)
				swap(a[n-1][i],tmp);
		}
		n--;
		if(cot<m){
			for(int i=n-1;i>=dong;i--)
				swap(tmp,a[i][cot]);
		}
		cot++;
	}
	for(int i=0;i<cot1;i++){
			for(int j=0;j<dong1;j++){
				cout<<a[i][j]<<" ";
			}
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		quay(n,m);
		cout<<endl;
	}
}

// Cho ma trận A[][] gồm các số nguyên dương. Nhiệm vụ của bạn là quay ma trận theo chiều kim đồng hồ. Ví dụ về quay theo chiều kim đồng hồ ma trận A[][] dưới đây.

// 1          2          3                      4          1          2         

// 4          5          6                      7          5          3

// 7          8          9                      8          9          6
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, m tương ứng với số hàng, số cột của ma trận A[]; dòng tiếp theo đưa vào n×m số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
// T, n,m, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤100; 1≤ A[i][j] ≤105.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 2 2
// 1 2 5 6
// 3 3
// 1 2 3 4 5 6 7 8 9

// Output:
// 5 1 6 2
// 4 1 2 7 5 3 8 9 6 