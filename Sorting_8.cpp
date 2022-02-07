#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000005],b[1000005];
int tim(int x,int c[]){
	if(x==0) return 0;
	if(x==1) return c[0];
	int *dem=upper_bound(b,b+m,x);
	int res=(b+m)-dem;
	res+=(c[0]+c[1]);
	if(x==2) res-=(c[3]+c[4]);
	if(x==3) res+=c[2];
	return res;
}
int tinh(){
	int c[5]={0};
	for(int i=0;i<m;i++){
		if(b[i]<5) c[b[i]]++;
	}
	sort(b,b+m);
	int dem=0;
	for(int i=0;i<n;i++){
		dem+=tim(a[i],c);
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		cout<<tinh()<<endl;
	}
}


// Cho mảng X[] gồm n phần tử và mảng Y[] gồm m phần tử. Hãy đếm số các cặp xy>yx, trong đó x€X[] và y€Y[]. Ví dụ X[] = {2, 1, 6 }, Y[] = {1, 5} ta có kết quả là 3 cặp (2, 1), (2, 5), (6, 1).
// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng X[] và Y[]; dòng tiếp theo là n số X[i] của mảng X[]; dòng cuối cùng là m số của mảng Y[]; các số được viết cách nhau một vài khoảng trống.
// T, n, m, X[i], Y[j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤105; 1≤ X[i], Y[j] ≤103.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1
// 3 2
// 2 1 6
// 1 5
// Output:
// 3
 