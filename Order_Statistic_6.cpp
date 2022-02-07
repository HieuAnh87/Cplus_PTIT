#include<bits/stdc++.h>
using namespace std;
int n;
int b[1000005],c[1000005];
int a[1000005];
int slove(){
	int maxDiff;
	b[0]=a[0];
	for(int i=1;i<n;i++) b[i]=min(a[i],b[i-1]);
	c[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--) c[i]=max(a[i],c[i+1]);
	int i=0,j=0;maxDiff=-1;
	while(i<n && j<n){
		if(b[i]<c[j]){
			maxDiff=max(maxDiff,j-i);
			j++;
		}
		else i++;
	}
	return maxDiff;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<slove()<<endl;
	}
}


// Cho mảng A[] gồm n số nguyên dương. Hãy tìm hiệu lớn nhất của i-j thỏa mãn ràng buộc A[i]<=A[j]. Ví dụ với mảng A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1} ta nhận được kết quả là 6  vì A[1]<A[7] và 7-1 = 6 là lớn nhất.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤107; 1≤ A[i] ≤108;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1
// 9
// 34 8 10 3 2 80 30 33 1
// Output:

// 6