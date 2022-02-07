#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=k;i<n;i++) cout<<a[i]<<" ";
		for(int i=0;i<k;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}


// . Cho mảng A[] gồm n phần tử và số d. Hãy thực hiện phép quay vòng d phần tử của 
// mảng A[]. Ví dụ với mảng A[] = {1, 2, 3, 4, 5}, d = 2 thì ta có kết quả A[] = {3, 4, 5, 1, 2}.
// Input: 
// x Dòng đầu tiên đưa vào số lượng bộ test T.
// x Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là hai số n 
// và d; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng 
// trống.
// x T, n, d, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ d < n ≤106
// ; 1≤ A[i] ≤107
// ;
// Output:
// x Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 5 2
// 1 2 3 4 5
// 7 4
// 1 2 3 4 5 6 7
// Output:
// 3 4 5 1 2
// 5 6 7 1 2 3 4