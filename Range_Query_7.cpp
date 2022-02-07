#include<bits/stdc++.h>
using namespace std;
int n,x,a[1000005];
int slove(){
	int sum=0,len=n+1;
	int i=0,j=0;
	while(j<n){
		while(sum<=x && j<n){
			sum+=a[j++];
		}
		while(sum>x && i<n){
			len=min(len,j-i);
			sum-=a[i++];
		}
	}
	return len;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;i++) cin>>a[i];
		if(slove()==n+1) cout<<-1<<endl;
		else cout<<slove()<<endl;
	}
}


// Cho mảng A[] gồm n số nguyên và số X. Hãy tìm độ dài dãy con liên tục nhỏ nhất có tổng lớn hơn X. Ví dụ với A[] = { 1, 4, 45, 6, 0, 19} và X = 51 ta có câu trả lời là 3 tương ứng với dãy con {4, 45, 6}. Với dãy A[] = {1, 10, 5, 2, 7} và X =9 ta có câu trả lời là 1 tương ứng với dãy con {10}. Với dãy A[] = {1, 2, 4}và X=8 ta có câu trả lời là -1.
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và số X; dòng tiếp theo là n số A[i] của mảng A[]; các số được viết cách nhau một vài khoảng trống.
// T, n, X, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n  ≤107; 1≤ A[i]  ≤107.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 2
// 6 51
// 1 4 45 6 0 19
// 3 8
// 1 2 4
// Output:
// 3
// -1