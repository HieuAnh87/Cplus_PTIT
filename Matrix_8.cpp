#include<bits/stdc++.h>
using namespace std;
int n;
void slove(){
	int m=8*n*n;
	int b[m+5];
	b[0]=8*n*n+2*n;
	int curr=b[0];
	int index=1,step=2,flag=1;;
	while(index<m){
		for(int i=0;i<step;i++){
			curr=b[index++]=curr-4*n*flag;
			if(index>=m) break;
		}
		if(index>=m) break;
		for(int i=0;i<step;i++){
			curr=b[index++]=curr+flag;
			if(index>=m) break;
		}
		flag*=-1;
		step+=2;
	}
	int c[m+5];
	for(int i=0;i<m;i++){
		c[i]=16*n*n+1-b[i];
	}
	for(int i=0;i<m;i++) cout<<b[i]<<" ";
	cout<<endl;
	for(int i=0;i<m;i++) cout<<c[i]<<" ";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		slove();
	}
}

// Cho số N biểu diễn cho ma trận vuông A[4*N][4*N] được điền các con số từ 1 đến 4*N*4*N theo thứ tự từ nhỏ đến lớn, từ trái qua phải. Nhiệm vụ của bạn là in các phần tử của ma trận theo hai hình cuộn dây. Ví dụ với N = 2 ta có ma trận 4×4 và hai cuộn dây sau:

// Cuộn 1: 10  6  2  3  4  8  12  16

// Cuộn 2: 7  11  15  14  13  9  5  1

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một số N được viết trên 1 dòng.
// T, N thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ N ≤10.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1
// 1
// Output:

// 10 6 2 3 4 8 12 16
// 7 11 15 14 13 9 5 1