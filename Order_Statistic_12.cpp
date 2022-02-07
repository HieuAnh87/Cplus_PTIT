#include<bits/stdc++.h>
using namespace std;
vector<int> a, b;
//vector<int> dd;
int n, m;
void Run()
{	
	cin>>n>>m;
	a.clear();
	a.resize(n);
	b.clear();
	b.resize(m);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	for(int i=1; i<n; i++) a[i]=a[i]+a[i-1];
	for(int i=1; i<m; i++) b[i]=b[i]+b[i-1];
	int maxx=0;
	int k=n<m?n:m;
	for(int i=0; i<k; i++)
	{
		int tmp=max(a[n-1]-a[i], b[m-1]-b[i]);
		int res=0;
		if(a[i]<b[i]) res=tmp+b[i];
		else res=tmp+a[i];
		maxx=max(maxx, res);
	}
	cout<<maxx;
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}

// Cho hai mảng đã được sắp xếp A1[] và A[2] gồm n, m phần tử theo thứ tự. Nhiệm vụ của bạn là tìm tổng lớn nhất của các sô bắt đầu tại phần tử đầu tiên của một mảng và kết thúc ở phần tử cuối cùng của một trong hai mảng. Ví dụ với mảng A1[] = {2, 3, 7, 10, 12}, A2[] = { 1, 5, 7, 8} ta có kết quả là 35 tương ứng với tổng S = 1+5+7+10+12.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.
// T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103; 1≤ A1[i], A2[j] ≤104;
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Input:
// 1

// 5 4
// 2 3 7 10 12
// 1 5 7 8 
// Output:
// 35