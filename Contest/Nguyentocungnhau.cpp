#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return n>1;
}
int gcd(int a,int b){
	while(a%b!=0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=1;i<n;i++){
			if(gcd(i,n)==1) dem++;
		}
		if(nt(dem)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}

// Juggernaut được cô giáo Disruptor dạy toán, cô giáo định nghĩa một hàm f(x) như sau:

// Với  t là số lượng các số tự nhiên k (1 <= k <= x) thỏa mãn nguyên tố cùng nhau với x, nếu t là nguyên tố thì f(x) = 1, ngược lại f(x) = 0.

// Disruptor cho Juggernaut một số nguyên dương x, yêu cầu anh cho biết giá trị của hàm f(x), nếu trả lời sai thì Jug sẽ bị  cô trả về nhà, Jug không muốn về nhà, các bạn hãy giúp Jug giải bài toán này.

// Input
// Dòng đầu tiên chứa số bộ test T (T <= 10).

// Mỗi test gồm một dòng chứa số x (1 <= x <= 10^5).

// Output
// In ra kết quả mỗi test trên một dòng là giá trị của hàm f(x).

// Example
// Input:
// 2

// 2

// 3

// Output:

// 0

// 1