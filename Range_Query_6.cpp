#include<bits/stdc++.h>
using namespace std;
int n,a[10005],dp[10005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			dp[i]=a[i];
		}
		int res=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+a[i]);
			}
			res=max(dp[i],res);
		}
		cout<<res<<endl;
	}
}


// Cho mảng A[] gồm n số nguyên dương. Hãy tìm tổng lớn nhất của dãy con tăng dần của dãy số A[]. Ví dụ với A[] = { 1, 101, 2, 3, 100, 4, 5} ta có câu trả lời là 106=1+2+3+100. Với dãy A[] = {10, 5, 4, 3} ta có câu trả lời là 10.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n  ≤103; 1≤ A[i]  ≤107.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 7
// 1 101 2 3 100 4 5
// 4
// 10 5 4 3
// Output:
// 106
// 10